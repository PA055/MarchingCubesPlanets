using System;
using System.Collections.Generic;

using UnityEngine;

[ExecuteInEditMode]
public class Chunk : MonoBehaviour
{
    [Range(1, 8)]
    public int PointsPerUnit = 1;
    public bool showBorder = false;
    [HideInInspector]
    public World world;
    [HideInInspector]
    public Vector3Int chunkIndex;
    Material material;
    MeshFilter meshFilter;
    MeshCollider meshCollider;

    List<Vector3> vertices = new List<Vector3>();
    List<int> triangles = new List<int>();

    ComputeShader marchingCubesShader;
    ComputeShader densityMapShader;
    ComputeShader terraformShader;

    ComputeBuffer triBuffer;
    ComputeBuffer triCountBuffer;

    public  RenderTexture densityTexture;

    [HideInInspector]
    public bool isGenerated = false;

    System.Diagnostics.Stopwatch timer_MarchingCubesAlgorithm;
    System.Diagnostics.Stopwatch timer_ProcessTriangles;
    System.Diagnostics.Stopwatch timer_PopulateTerrrainMap;


    public int PointsPerAxis { 
        get {
            return world.chunkSize * this.PointsPerUnit + 1;
        }
    }

    public float VoxelWidth {
        get {
            return 1.0f / this.PointsPerUnit;
        }
    }

    public void Init(World world, Vector3Int chunkIndex, int LOD) {
        this.world = world;
        this.chunkIndex = chunkIndex;
        this.PointsPerUnit = LOD;
        this.marchingCubesShader = world.marchingCubesShader;
        this.densityMapShader = world.densityMapShader;
        this.terraformShader = world.terraformShader;

        timer_MarchingCubesAlgorithm = new System.Diagnostics.Stopwatch();
        timer_ProcessTriangles = new System.Diagnostics.Stopwatch();
        timer_PopulateTerrrainMap = new System.Diagnostics.Stopwatch();

        this.meshFilter = gameObject.GetComponent<MeshFilter>();
        this.meshCollider = gameObject.GetComponent<MeshCollider>();

        gameObject.GetComponent<MeshRenderer>().material = world.material;
        this.material = world.material;
        
        CreateBuffers();
        PopulateTerrainMap();
    }

    void OnDrawGizmos() {
        if (showBorder || world.showChunkOutline)
            Gizmos.DrawWireCube(transform.position + Vector3.one * (world.chunkSize / 2f), Vector3.one * world.chunkSize);
    }

    public void PrintTimers() {
        Debug.Log("Populate Terrain Map: " + timer_PopulateTerrrainMap.ElapsedMilliseconds + " ms");
        Debug.Log("Run Marching Cubes Algorithm: " + timer_MarchingCubesAlgorithm.ElapsedMilliseconds + " ms");
        Debug.Log("Process Triangle Data: " + timer_ProcessTriangles.ElapsedMilliseconds + " ms");
    }

    public long[] GetTimerValues() {
        return new long[3] { 
            timer_MarchingCubesAlgorithm.ElapsedMilliseconds, 
            timer_ProcessTriangles.ElapsedMilliseconds,
            timer_PopulateTerrrainMap.ElapsedMilliseconds,
        };
    }

    void CreateBuffers() {
        int numVoxels = (PointsPerAxis + 1) * (PointsPerAxis + 1) * (PointsPerAxis + 1);
        int maxTriangleCount = numVoxels * 5;

        Create3DTexture(ref densityTexture, PointsPerAxis + 1, "Density Texture");
        triCountBuffer = new ComputeBuffer(1, sizeof(int), ComputeBufferType.Raw);
        triBuffer = new ComputeBuffer(maxTriangleCount, sizeof(float) * 3 * 3, ComputeBufferType.Append);
    }

    void Create3DTexture(ref RenderTexture texture, int size, string name) {
		var format = UnityEngine.Experimental.Rendering.GraphicsFormat.R32_SFloat;
		if (texture == null || !texture.IsCreated() || texture.width != size || texture.height != size || texture.volumeDepth != size || texture.graphicsFormat != format)
		{
			//Debug.Log ("Create tex: update noise: " + updateNoise);
			if (texture != null)
			{
				texture.Release();
			}
			const int numBitsInDepthBuffer = 0;
			texture = new RenderTexture(size, size, numBitsInDepthBuffer);
			texture.graphicsFormat = format;
			texture.volumeDepth = size;
			texture.enableRandomWrite = true;
			texture.dimension = UnityEngine.Rendering.TextureDimension.Tex3D;


			texture.Create();
		}
		texture.wrapMode = TextureWrapMode.Clamp;
		texture.filterMode = FilterMode.Bilinear;
		texture.name = name;
	}

    void ReleaseBuffers() {
        if (triCountBuffer != null)
            triCountBuffer.Release();
        
        if (triBuffer != null)
            triBuffer.Release();
    }

    void OnDestroy() {
        ReleaseBuffers();
    }

    public void PopulateTerrainMap() {
        timer_PopulateTerrrainMap.Start();

        int kernel = densityMapShader.FindKernel("GetDensityMap");
        densityMapShader.SetTexture(kernel, "densityMap", densityTexture);
        densityMapShader.SetInt("textureSize", densityTexture.width);
        densityMapShader.SetVector("chunkCoords", (Vector3) chunkIndex);
        densityMapShader.SetFloat("chunkSize", world.chunkSize);

        densityMapShader.SetFloat("planetRadius", world.terrainManager.planetRadius);
        densityMapShader.SetFloat("noiseHeightMultiplier", world.terrainManager.noiseHeightMultiplier);
        densityMapShader.SetFloat("noiseScale", world.terrainManager.noiseScale);

        densityMapShader.Dispatch(kernel, Mathf.CeilToInt(densityTexture.width / 8f), Mathf.CeilToInt(densityTexture.width / 8f), Mathf.CeilToInt(densityTexture.width / 8f));

        timer_PopulateTerrrainMap.Stop();
    }

    public void RegenerateMesh() {
        ClearMesh();        
        MarchingCubes();
        BuildMesh();
        isGenerated = true;
    }

    public void MarchingCubes() {
        timer_MarchingCubesAlgorithm.Start();
        int marchingCubesKernel = marchingCubesShader.FindKernel("ProcessCube");

        marchingCubesShader.SetTexture(marchingCubesKernel, "densityMap", densityTexture);
        marchingCubesShader.SetInt("NumPointsPerAxis", PointsPerAxis);
        marchingCubesShader.SetFloat("isoLevel", world.surfaceDensityValue);
        marchingCubesShader.SetBool("smoothTerrain", world.smoothTerrain);
        // marchingCubesShader.SetVector("chunkCoord", (Vector3) (chunkIndex * world.chunkSize));
        triBuffer.SetCounterValue(0);
        marchingCubesShader.SetBuffer(marchingCubesKernel, "triangles", triBuffer);

        marchingCubesShader.Dispatch(marchingCubesKernel, Mathf.CeilToInt((PointsPerAxis + 1) / 8f), Mathf.CeilToInt((PointsPerAxis + 1) / 8f), Mathf.CeilToInt((PointsPerAxis + 1) / 8f));

        int[] triCountData = new int[1];
        triCountBuffer.SetData(triCountData);
        ComputeBuffer.CopyCount(triBuffer, triCountBuffer, 0);
        triCountBuffer.GetData(triCountData);

        Triangle[] triangleArray = new Triangle[triCountData[0]];
        triBuffer.GetData(triangleArray, 0,  0, triCountData[0]);
        timer_MarchingCubesAlgorithm.Stop();

        ProcessTriangleData(triangleArray);
    }

    void ProcessTriangleData(Triangle[] triangleArray) {
        timer_ProcessTriangles.Start();
        ClearMesh();

        foreach (Triangle tri in triangleArray) {
            if (world.flatShaded) {
                vertices.Add(tri.vertexA);
                triangles.Add(vertices.Count - 1);
                
                vertices.Add(tri.vertexB);
                triangles.Add(vertices.Count - 1);

                vertices.Add(tri.vertexC);
                triangles.Add(vertices.Count - 1);
            } else {
                triangles.Add(GetIndexOfVertex(tri.vertexA));
                triangles.Add(GetIndexOfVertex(tri.vertexB));
                triangles.Add(GetIndexOfVertex(tri.vertexC));
            }
        }
        timer_ProcessTriangles.Stop();
    }

    int GetIndexOfVertex(Vector3 vert) {
        for (int i = 0; i < vertices.Count; i++) {
            if (vertices[i] == vert)
                return i;
        }

        vertices.Add(vert);
        return vertices.Count - 1;
    }

    public void BuildMesh() {
        Mesh mesh = new Mesh();
        mesh.vertices = vertices.ToArray();
        mesh.triangles = triangles.ToArray();
        mesh.RecalculateNormals();
        meshFilter.mesh = mesh;
        meshCollider.sharedMesh = mesh;
    }

    public void ClearMesh() {
        vertices.Clear();
        triangles.Clear();
        Mesh mesh = new Mesh();
        meshFilter.mesh = mesh;
        meshCollider.sharedMesh = mesh;
    }

    public void Terraform(Vector3 point, float radius, float weight) {
        int kernel = terraformShader.FindKernel("EditTexture");

        terraformShader.SetTexture(kernel, "densityMap", densityTexture);
        terraformShader.SetInt("chunkSize", world.chunkSize);
        terraformShader.SetVector("brushCenter", point);
        terraformShader.SetFloat("brushRadius", radius);
        terraformShader.SetFloat("brushWeight", weight);
        terraformShader.SetFloat("deltaTime", Time.deltaTime);

        terraformShader.Dispatch(kernel, Mathf.CeilToInt(densityTexture.width / 8f), Mathf.CeilToInt(densityTexture.width / 8f), Mathf.CeilToInt(densityTexture.width / 8f));

        RegenerateMesh();
    }

    public Vector3 GetLocalCoordsFromWorldCoords(Vector3 point) {
        return new Vector3(
            point.x - chunkIndex.x * world.chunkSize,
            point.y - chunkIndex.y * world.chunkSize,
            point.z - chunkIndex.z * world.chunkSize
        );
    }

    public Vector3Int PointToIndex(Vector3 point) {
        return new Vector3Int(
            Mathf.FloorToInt(point.x / VoxelWidth),
            Mathf.FloorToInt(point.y / VoxelWidth),
            Mathf.FloorToInt(point.z / VoxelWidth)
        );
    }
}

[Serializable]
public struct Triangle {
    public Vector3 vertexA;
    public Vector3 vertexB;
    public Vector3 vertexC;

    public override String ToString() {
        return "Triangle with vertexes at " + vertexA.ToString() + ", " + vertexB.ToString() + ", and " + vertexC.ToString();
    }
}
