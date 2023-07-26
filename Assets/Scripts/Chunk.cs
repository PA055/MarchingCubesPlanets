using System;
using System.Collections.Generic;

using UnityEngine;

[ExecuteInEditMode]
public class Chunk : MonoBehaviour
{
    [Range(1, 8)]
    public int LevelOfDetail = 1;
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
    List<GameObject> terrainPoints = new List<GameObject>();

    ComputeShader marchingCubesShader;
    ComputeBuffer triBuffer;
    ComputeBuffer triCountBuffer;
    ComputeBuffer densityMapBuffer;

    public bool showTriangles;
    public Triangle[] triangleArray;
    List<Triangle> triList = new List<Triangle>();
    public float[] terrainArray;

    int oldLOD;
    float[,,] terrainMap;
    [HideInInspector]
    public bool showingCubes = false;
    [HideInInspector]
    public bool showingVertices = false;
    [HideInInspector]
    public bool showGizmos = false;
    [HideInInspector]
    public bool isGenerated = false;

    System.Diagnostics.Stopwatch timer_MarchingCubesAlgorithm;
    System.Diagnostics.Stopwatch timer_ProcessTriangles;
    System.Diagnostics.Stopwatch timer_PopulateTerrrainMap;
    System.Diagnostics.Stopwatch timer_GenerateDensityBuffer;


    public int PointsPerUnit {
        get {
            return Constants.VoxelsPerUnitAtLODValue[this.LevelOfDetail];
        }
    }

    public int PointsPerAxis { 
        get {
            return world.chunkSize * Constants.VoxelsPerUnitAtLODValue[this.LevelOfDetail] + 1;
        }
    }

    public float VoxelWidth {
        get {
            return 1.0f / Constants.VoxelsPerUnitAtLODValue[this.LevelOfDetail];
        }
    }

    void OnDrawGizmos() {
        if (showBorder || world.showChunkOutline)
            Gizmos.DrawWireCube(transform.position + Vector3.one * (world.chunkSize / 2f), Vector3.one * world.chunkSize);
        if (showTriangles) {
            Gizmos.color = Color.green;
            foreach (Triangle tri in triangleArray) {
                Gizmos.DrawLine(GetWorldSpaceOfPoint(tri.vertexA), GetWorldSpaceOfPoint(tri.vertexB));
                Gizmos.DrawLine(GetWorldSpaceOfPoint(tri.vertexB), GetWorldSpaceOfPoint(tri.vertexC));
                Gizmos.DrawLine(GetWorldSpaceOfPoint(tri.vertexC), GetWorldSpaceOfPoint(tri.vertexA));
            }
        }
    }

    public void Init(World world, Vector3Int chunkIndex, Material material, int LOD, ComputeShader marchingCubesShader) {
        this.world = world;
        this.chunkIndex = chunkIndex;
        this.LevelOfDetail = LOD;
        this.marchingCubesShader = marchingCubesShader;

        timer_MarchingCubesAlgorithm = new System.Diagnostics.Stopwatch();
        timer_ProcessTriangles = new System.Diagnostics.Stopwatch();
        timer_PopulateTerrrainMap = new System.Diagnostics.Stopwatch();
        timer_GenerateDensityBuffer = new System.Diagnostics.Stopwatch();

        this.meshFilter = gameObject.GetComponent<MeshFilter>();
        this.meshCollider = gameObject.GetComponent<MeshCollider>();

        gameObject.GetComponent<MeshRenderer>().material = material;
        this.material = material;
        
        CreateBuffers();
        PopulateTerrainMap();
        if (world.generateGizmos)
            DrawWidgets();
    }

    public void PrintTimers() {
        Debug.Log("Populate Terrain Map: " + timer_PopulateTerrrainMap.ElapsedMilliseconds + " ms");
        Debug.Log("Generate Terrain Buffer: " + timer_GenerateDensityBuffer.ElapsedMilliseconds + " ms");
        Debug.Log("Run Marching Cubes Algorithm: " + timer_MarchingCubesAlgorithm.ElapsedMilliseconds + " ms");
        Debug.Log("Process Triangle Data: " + timer_ProcessTriangles.ElapsedMilliseconds + " ms");
    }

    public long[] GetTimerValues() {
        return new long[4] { 
            timer_MarchingCubesAlgorithm.ElapsedMilliseconds, 
            timer_ProcessTriangles.ElapsedMilliseconds,
            timer_PopulateTerrrainMap.ElapsedMilliseconds,
            timer_GenerateDensityBuffer.ElapsedMilliseconds
        };
    }

    void CreateBuffers() {
        int numVoxels = (PointsPerAxis + 1) * (PointsPerAxis + 1) * (PointsPerAxis + 1);
        int maxTriangleCount = numVoxels * 5;

        triCountBuffer = new ComputeBuffer(1, sizeof(int), ComputeBufferType.Raw);
        triBuffer = new ComputeBuffer(maxTriangleCount, sizeof(float) * 3 * 3, ComputeBufferType.Append);
        densityMapBuffer = new ComputeBuffer(numVoxels, sizeof(float), ComputeBufferType.Structured);
    }

    void ReleaseBuffers() {
        if (triCountBuffer != null)
            triCountBuffer.Release();
        
        if (triBuffer != null)
            triBuffer.Release();
        
        if (densityMapBuffer != null)
            densityMapBuffer.Release();
    }

    void OnDestroy() {
        ReleaseBuffers();
    }

    public void PopulateTerrainMap() {
        timer_PopulateTerrrainMap.Start();
        terrainMap = new float[PointsPerAxis, PointsPerAxis, PointsPerAxis];
        oldLOD = LevelOfDetail;
        for (int x = 0; x < PointsPerAxis; x++) {
            for (int y = 0; y < PointsPerAxis; y++) {
                for (int z = 0; z < PointsPerAxis; z++) {
                    terrainMap[x, y, z] = world.GetGeneratedTerrainAtPoint(GetWorldSpaceOfIndex(new Vector3Int(x, y, z)));
                }
            }
        }
        timer_PopulateTerrrainMap.Stop();
    }

    public void DrawWidgets() {
        for (int i = 0; i < terrainPoints.Count; i++) {
            DestroyImmediate(terrainPoints[i]);
        }
        terrainPoints.Clear();

        for (int x = 0; x < PointsPerAxis; x++) {
            for (int y = 0; y < PointsPerAxis; y++) {
                for (int z = 0; z < PointsPerAxis; z++) {
                    GameObject terrainPoint = (GameObject) Instantiate(world.terrainPointPrefab, GetWorldSpaceOfIndex(new Vector3Int(x, y, z)), Quaternion.identity);
                    terrainPoint.GetComponent<TerrainPoint>().init(this, new Vector3Int(x, y, z));
                    terrainPoint.transform.parent = transform;
                    terrainPoint.transform.localScale *= VoxelWidth;
                    terrainPoints.Add(terrainPoint);
                }
            }
        }
    }

    public void RegenerateMesh() {
        ClearMesh();
        if (LevelOfDetail != oldLOD) {
            PopulateTerrainMap();
            if (world.generateGizmos)
                DrawWidgets();
        }

        if (world.useComputeShader)
            GPUMarchingCubes();
        else 
            CPUMarchingCubes();

        BuildMesh();
        isGenerated = true;
    }

    public void GPUMarchingCubes() {
        timer_GenerateDensityBuffer.Start();
        terrainArray = new float[(PointsPerAxis + 1) * (PointsPerAxis + 1) * (PointsPerAxis + 1)];
        for (int x = 0; x < PointsPerAxis + 1; x++) {
            for (int y = 0; y < PointsPerAxis + 1; y++) {
                for (int z = 0; z < PointsPerAxis + 1; z++) {
                    terrainArray[IndexFromCoord(new Vector3Int(x, y, z))] = world.SampleTerrain(GetWorldSpaceOfIndex(new Vector3Int(x, y, z)));
                }
            }
        }
        densityMapBuffer.SetData(terrainArray);
        timer_GenerateDensityBuffer.Stop();

        timer_MarchingCubesAlgorithm.Start();
        int marchingCubesKernel = marchingCubesShader.FindKernel("ProcessCube");

        marchingCubesShader.SetInt("NumPointsPerAxis", PointsPerAxis);
        marchingCubesShader.SetFloat("isoLevel", world.surfaceDensityValue);
        marchingCubesShader.SetBool("smoothTerrain", world.smoothTerrain);
        // marchingCubesShader.SetVector("chunkCoord", (Vector3) (chunkIndex * world.chunkSize));
        triBuffer.SetCounterValue(0);
        marchingCubesShader.SetBuffer(marchingCubesKernel, "triangles", triBuffer);
        marchingCubesShader.SetBuffer(marchingCubesKernel, "densityMap", densityMapBuffer);

        marchingCubesShader.Dispatch(marchingCubesKernel, Mathf.CeilToInt((PointsPerAxis + 1) / 8f), Mathf.CeilToInt((PointsPerAxis + 1) / 8f), Mathf.CeilToInt((PointsPerAxis + 1) / 8f));

        int[] triCountData = new int[1];
        triCountBuffer.SetData(triCountData);
        ComputeBuffer.CopyCount(triBuffer, triCountBuffer, 0);
        triCountBuffer.GetData(triCountData);

        triangleArray = new Triangle[triCountData[0]];
        triBuffer.GetData(triangleArray, 0,  0, triCountData[0]);
        timer_MarchingCubesAlgorithm.Stop();

        // Debug.Log("------------------- Chunk at " + chunkIndex + " -------------------");
        // foreach(Triangle tri in triangleArray) {
        //     Debug.Log(tri.ToString());
        // }
        // Debug.Log("-------------------------------------------------------------------");
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

    void CPUMarchingCubes() {
        if (!world.useOldCpu) {
            timer_GenerateDensityBuffer.Start();
            terrainArray = new float[(PointsPerAxis + 1) * (PointsPerAxis + 1) * (PointsPerAxis + 1)];
            for (int x = 0; x < PointsPerAxis + 1; x++) {
                for (int y = 0; y < PointsPerAxis + 1; y++) {
                    for (int z = 0; z < PointsPerAxis + 1; z++) {
                        terrainArray[IndexFromCoord(new Vector3Int(x, y, z))] = world.SampleTerrain(GetWorldSpaceOfIndex(new Vector3Int(x, y, z)));
                    }
                }
            }
            timer_GenerateDensityBuffer.Stop();
        }

        timer_MarchingCubesAlgorithm.Start();
        for (int x = 0; x < PointsPerAxis; x++) {
            for (int y = 0; y < PointsPerAxis; y++) {
                for (int z = 0; z < PointsPerAxis; z++) {
                    if (world.useOldCpu)
                        OldCPUMarchCube(new Vector3Int(x, y, z));
                    else
                        CPUMarchCube(new Vector3Int(x, y, z));
                }
            }
        }
        timer_MarchingCubesAlgorithm.Stop();

        triangleArray = triList.ToArray();
        if (!world.useOldCpu)
            ProcessTriangleData(triangleArray);
    }

    public void CPUMarchCube(Vector3Int index) {
        if (index.x >= PointsPerAxis || index.y >= PointsPerAxis || index.z >= PointsPerAxis)
            return;

        Vector3Int[] cornerCoords = new Vector3Int[8];
        for (int i = 0; i < 8; i++) {
            cornerCoords[i] = index + Constants.CornerTable[i];
        }

        int cubeConfig = 0;
        for (int i = 0; i < 8; i++) {
            if (SampleDensity(cornerCoords[i]) < world.surfaceDensityValue) {
                cubeConfig |= (1 << i);
            }
        }

        for (int i = 0; i < 16; i+=3) {
            if (Constants.TriangleTable[cubeConfig, i] == -1) { break; }

            int edgeIndexA = Constants.TriangleTable[cubeConfig, i + 0];
            int a0 = Constants.cornerIndexAFromEdge[edgeIndexA];
            int a1 = Constants.cornerIndexBFromEdge[edgeIndexA];

            int edgeIndexB = Constants.TriangleTable[cubeConfig, i + 1];
            int b0 = Constants.cornerIndexAFromEdge[edgeIndexB];
            int b1 = Constants.cornerIndexBFromEdge[edgeIndexB];

            int edgeIndexC = Constants.TriangleTable[cubeConfig, i + 2];
            int c0 = Constants.cornerIndexAFromEdge[edgeIndexC];
            int c1 = Constants.cornerIndexBFromEdge[edgeIndexC];

            // Calculate positions of each vertex.
            Vector3 vertexA = createVertex(cornerCoords[a0], cornerCoords[a1]);
            Vector3 vertexB = createVertex(cornerCoords[b0], cornerCoords[b1]);
            Vector3 vertexC = createVertex(cornerCoords[c0], cornerCoords[c1]);

            // Create triangle
            Triangle tri;
            tri.vertexA = vertexA;
            tri.vertexB = vertexB;
            tri.vertexC = vertexC;
            triList.Add(tri);
        }
    }

    int IndexFromCoord(Vector3Int coord) {
        return coord.x + (coord.y + coord.z * (PointsPerAxis + 1)) * (PointsPerAxis + 1);
    }

    float SampleDensity(Vector3Int coord) {
        int index = IndexFromCoord(coord);
        return terrainArray[index];
    }

    Vector3 createVertex(Vector3Int pointA, Vector3Int pointB) {
        if (world.smoothTerrain) {
        // Interpolate between the 2 points based on the density
        float pointASample = SampleDensity(pointA);
        float pointBSample = SampleDensity(pointB);

        float t = (world.surfaceDensityValue - pointASample) / (pointBSample - pointASample);
	    Vector3 position = pointA + t * (Vector3) (pointB - pointA);

        return position;
    } else {
        // Return the middle point between the 2
        return (Vector3) (pointA + pointB) / 2f;
    }
    }

    public void OldCPUMarchCube(Vector3Int index) {
        float[] cube = new float[8];
        for (var i = 0; i < 8; i++) {
            Vector3 corner = GetWorldSpaceOfIndex(index + Constants.CornerTable[i]);
            cube[i] = world.SampleTerrain(corner);
            cube[i] = Mathf.Clamp(cube[i], -100000, 100000);
        }

        int configIndex = GetCubeConfig(cube);
        if (configIndex == 0 || configIndex == 255) 
            return;
        
        int edgeIndex = 0;
        for (int i = 0; i < 5; i++) {
            Triangle tri = new Triangle();
            for (int p = 0; p < 3; p++) {
                int TriangleIndex = Constants.TriangleTable[configIndex, edgeIndex];
                if (TriangleIndex == -1)
                    return;
                
                Vector3 vert1 = GetRelativePositionOfIndex(index + Constants.CornerTable[Constants.EdgeIndexes[TriangleIndex, 0]]);
                Vector3 vert2 = GetRelativePositionOfIndex(index + Constants.CornerTable[Constants.EdgeIndexes[TriangleIndex, 1]]);

                Vector3 vertPos;

                if (world.smoothTerrain) {
                    float vert1Sample = cube[Constants.EdgeIndexes[TriangleIndex, 0]];
                    float vert2Sample = cube[Constants.EdgeIndexes[TriangleIndex, 1]];

                    float difference = vert2Sample - vert1Sample;

                    if (difference == 0)
                        difference = world.surfaceDensityValue;
                    else
                        difference = (world.surfaceDensityValue - vert1Sample) / difference;

                    vertPos = vert1 + ((vert2 - vert1) * difference);
                } else {
                    vertPos = (vert1 + vert2) / 2f;
                }

                if (world.flatShaded) {
                    vertices.Add(vertPos);
                    triangles.Add(vertices.Count - 1);
                } else {
                    triangles.Add(GetIndexOfVertex(vertPos));
                }

                if (p == 0)
                    tri.vertexA = vertPos;
                else if (p == 1)
                    tri.vertexB = vertPos;
                else if (p == 2)
                    tri.vertexC = vertPos;

                edgeIndex++;
            }

            triList.Add(tri);
        }
    }

    int GetCubeConfig(float[] cube) {
        int configIndex = 0;
        for (int i = 0; i < 8; i++) {
            if (cube[i] < world.surfaceDensityValue) {
                configIndex |= 1 << i;
            }
        }

        return configIndex;
    }

    int GetIndexOfVertex(Vector3 vert) {
        for (int i = 0; i < vertices.Count; i++) {
            if (vertices[i] == vert)
                return i;
        }

        vertices.Add(vert);
        return vertices.Count - 1;
    }

    public void ToggleAllCubes(bool value) {
        foreach (GameObject terrainPoint in terrainPoints) {
            terrainPoint.GetComponent<TerrainPoint>().ShowCube(value);
        }
        showingCubes = value;
    }

    public void ToggleAllVertices(bool value) {
        foreach (GameObject terrainPoint in terrainPoints) {
            terrainPoint.GetComponent<TerrainPoint>().ShowPoints(value);
        }
        showingVertices = value;
    }

    public void ToggleGizmos(bool value) {
        showGizmos = value;
        foreach (GameObject terrainPoint in terrainPoints) {
            terrainPoint.SetActive(value);
        }
    }

    public void ToggleGizmosAboveThreshold(bool value, float threshold) {
        showGizmos = value;
        foreach (GameObject terrainPoint in terrainPoints) {
            if (terrainPoint.GetComponent<TerrainPoint>().terrainValue >= threshold)
                terrainPoint.SetActive(value);
        }
    }

    public void ToggleGizmosBelowThreshold(bool value, float threshold) {
        showGizmos = value;
        foreach (GameObject terrainPoint in terrainPoints) {
            if (terrainPoint.GetComponent<TerrainPoint>().terrainValue <= threshold)
                terrainPoint.SetActive(value);
        }
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

    public Vector3 GetWorldSpaceOfIndex(Vector3Int index) {
        return new Vector3(
            chunkIndex.x * world.chunkSize + index.x * VoxelWidth,
            chunkIndex.y * world.chunkSize + index.y * VoxelWidth,
            chunkIndex.z * world.chunkSize + index.z * VoxelWidth
        );
    }
    
    public Vector3 GetWorldSpaceOfPoint(Vector3 point) {
        return new Vector3(
            chunkIndex.x * world.chunkSize + point.x,
            chunkIndex.y * world.chunkSize + point.y,
            chunkIndex.z * world.chunkSize + point.z
        );
    }

    public Vector3 GetRelativePositionOfIndex(Vector3Int index) {
        return (Vector3) index * VoxelWidth;
    }

    public Vector3 GetLocalCoordsFromWorldCoords(Vector3 point) {
        return new Vector3(
            point.x - chunkIndex.x * world.chunkSize,
            point.y - chunkIndex.y * world.chunkSize,
            point.z - chunkIndex.z * world.chunkSize
        );
    }

    public Vector3 IndexToPoint(Vector3Int index) {
        return new Vector3(
            index.x * VoxelWidth,
            index.y * VoxelWidth,
            index.z * VoxelWidth
        );
    }

    public Vector3Int PointToIndex(Vector3 point) {
        return new Vector3Int(
            Mathf.FloorToInt(point.x / VoxelWidth),
            Mathf.FloorToInt(point.y / VoxelWidth),
            Mathf.FloorToInt(point.z / VoxelWidth)
        );
    }

    public float GetTerrainAtPoint(Vector3 point) {
        Vector3 referencePoint1 = (Vector3) PointToIndex(point);
        Vector3 referencePoint2 = (Vector3) PointToIndex(point);
        Vector3 distanceFromReference = point - referencePoint1;

        if (distanceFromReference == Vector3.zero)
            return GetTerrainAtIndex(PointToIndex(point));

        if (distanceFromReference.x > 0) 
            referencePoint2.x++;
        if (distanceFromReference.y > 0) 
            referencePoint2.y++;
        if (distanceFromReference.z > 0) 
            referencePoint2.z++;

        float point1Sample = GetTerrainAtIndex(new Vector3Int(Mathf.RoundToInt(referencePoint1.x), Mathf.RoundToInt(referencePoint1.y), Mathf.RoundToInt(referencePoint1.z)));
        float point2Sample = GetTerrainAtIndex(new Vector3Int(Mathf.RoundToInt(referencePoint2.x), Mathf.RoundToInt(referencePoint2.y), Mathf.RoundToInt(referencePoint2.z)));

        float difference = point2Sample - point1Sample;
        float pointValue = point1Sample + difference * distanceFromReference.magnitude;

        return pointValue;
    }

    public float GetTerrainAtIndex(Vector3Int index) {
        return terrainMap[index.x, index.y, index.z];
    }

    public void SetTerrainAtIndex(Vector3Int index, float value) {
        terrainMap[index.x, index.y, index.z] = value;
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
