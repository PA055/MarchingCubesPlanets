using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
public class Chunk : MonoBehaviour
{
    [Range(1, 8)]
    public int LevelOfDetail = 1;
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

    public int VoxelsPerUnit {
        get {
            return Constants.VoxelsPerUnitAtLODValue[this.LevelOfDetail];
        }
    }

    public int VoxelsPerAxis { 
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
        if (world.showChunkOutline)
            Gizmos.DrawWireCube(transform.position + Vector3.one * (world.chunkSize / 2f), Vector3.one * world.chunkSize);
    }

    public void Init(World world, Vector3Int chunkIndex, Material material, int LOD) {
        this.world = world;
        this.chunkIndex = chunkIndex;
        this.LevelOfDetail = LOD;

        this.meshFilter = gameObject.GetComponent<MeshFilter>();
        this.meshCollider = gameObject.GetComponent<MeshCollider>();

        gameObject.GetComponent<MeshRenderer>().material = material;
        this.material = material;
        
        PopulateTerrainMap();
        if (world.generateGizmos)
            DrawWidgets();
    }

    public void PopulateTerrainMap() {
        terrainMap = new float[VoxelsPerAxis, VoxelsPerAxis, VoxelsPerAxis];
        oldLOD = LevelOfDetail;
        for (int x = 0; x < VoxelsPerAxis; x++) {
            for (int y = 0; y < VoxelsPerAxis; y++) {
                for (int z = 0; z < VoxelsPerAxis; z++) {
                    terrainMap[x, y, z] = world.GetGeneratedTerrainAtPoint(GetWorldSpaceOfIndex(new Vector3Int(x, y, z)));
                }
            }
        }
    }

    void DrawWidgets() {
        for (int i = 0; i < terrainPoints.Count; i++) {
            DestroyImmediate(terrainPoints[i]);
        }
        terrainPoints.Clear();

        for (int x = 0; x < VoxelsPerAxis; x++) {
            for (int y = 0; y < VoxelsPerAxis; y++) {
                for (int z = 0; z < VoxelsPerAxis; z++) {
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
            DrawWidgets();
        }
        MarchingCubes();
        BuildMesh();
        isGenerated = true;
    }

    void MarchingCubes() {
        for (int x = 0; x < VoxelsPerAxis; x++) {
            for (int y = 0; y < VoxelsPerAxis; y++) {
                for (int z = 0; z < VoxelsPerAxis; z++) {
                    MarchCube(new Vector3Int(x, y, z));
                }
            }
        }
    }

    public void MarchCube(Vector3Int index) {
        float[] cube = new float[8];
        for (var i = 0; i < 8; i++) {
            Vector3 corner = GetWorldSpaceOfIndex(index + Constants.CornerTable[i]);
            cube[i] = world.SampleTerrain(corner);
        }

        int configIndex = GetCubeConfig(cube);
        if (configIndex == 0 || configIndex == 255) 
            return;
        
        int edgeIndex = 0;
        for (int i = 0; i < 5; i++) {
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

                edgeIndex++;
            }
        }
    }

    int GetCubeConfig(float[] cube) {
        int configIndex = 0;
        for (int i = 0; i < 8; i++) {
            if (cube[i] > world.surfaceDensityValue) {
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
