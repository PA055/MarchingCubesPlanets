using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
public class World : MonoBehaviour
{
    [Header("Global Generation Settings")]
    public TerrainManager terrainManager;
    public Material material;
    public bool smoothTerrain = true;
    public bool flatShaded = false;
    public bool useComputeShader;

    [Header("Chunk Generation Settings")]
    public GameObject player;
    public int halfRenderDistanceInChunks = 4;
    public int chunkSize;
    public float surfaceDensityValue;

    [Header("Compute Shaders")]
    ComputeShader marchingCubesShader;

    [Header("Debug Settings")]
    public GameObject terrainPointPrefab;
    public bool generateGizmos = true;
    public bool showChunkOutline = true;
    
    [Space]


    [HideInInspector]
    public bool showCube = false;
    [HideInInspector]
    public bool showPoints = false;
    [HideInInspector]
    public bool showGizmos = false;

    [HideInInspector]
    public Dictionary<Vector3Int, Chunk> chunks = new Dictionary<Vector3Int, Chunk>();

    void Start() {
        ClearChunks();
        GenerateChunks();
    }

    void Update() {
        if (Application.isPlaying) {
            foreach (Chunk chunk in chunks.Values) {
                Vector3Int playerChunkCoords = GetChunkCoordOfPoint(player.transform.position);
                if (    Mathf.Abs(chunk.chunkIndex.x - playerChunkCoords.x) > halfRenderDistanceInChunks ||
                        Mathf.Abs(chunk.chunkIndex.x - playerChunkCoords.y) > halfRenderDistanceInChunks ||
                        Mathf.Abs(chunk.chunkIndex.x - playerChunkCoords.z) > halfRenderDistanceInChunks) {
                    chunk.gameObject.SetActive(false);
                }
            }
            GenerateChunks();
        }
    }

    public void ClearChunks() {
        while (transform.childCount > 0) {
            DestroyImmediate(transform.GetChild(0).gameObject);
        }
        chunks.Clear();
    }

    public void GenerateChunks() {
        Vector3Int playerChunkCoords = GetChunkCoordOfPoint(player.transform.position);

        for (int x = playerChunkCoords.x - halfRenderDistanceInChunks; x < playerChunkCoords.x + halfRenderDistanceInChunks; x++) {
            for (int y = playerChunkCoords.y - halfRenderDistanceInChunks; y < playerChunkCoords.y + halfRenderDistanceInChunks; y++) {
                for (int z = playerChunkCoords.z - halfRenderDistanceInChunks; z < playerChunkCoords.z + halfRenderDistanceInChunks; z++) {
                    Vector3Int chunkCoord = new Vector3Int(x, y, z);
                    if (chunks.ContainsKey(chunkCoord)) {
                        chunks[chunkCoord].gameObject.SetActive(true);
                        continue;
                    }
                    GenerateChunk(chunkCoord);
                }
            }
        }

        foreach (Chunk chunk in chunks.Values) {
            if (!chunk.isGenerated) {
                chunk.RegenerateMesh();
            }
        }
    }

    Chunk GenerateChunk(Vector3Int chunkCoord) {
        GameObject chunkHolder = new GameObject("Chunk at x: " + chunkCoord.x + ", y: " + chunkCoord.y + ", z: " + chunkCoord.z);
        chunkHolder.layer = LayerMask.NameToLayer("Terrain");
        chunkHolder.transform.parent = transform;
        chunkHolder.AddComponent<MeshFilter>();
        chunkHolder.AddComponent<MeshRenderer>();
        chunkHolder.AddComponent<MeshCollider>();
        chunkHolder.transform.position = chunkCoord * chunkSize;
        chunkHolder.AddComponent<Chunk>();
        Chunk chunk = chunkHolder.GetComponent<Chunk>();
        chunk.Init(this, chunkCoord, material, 1, marchingCubesShader);
        chunks.Add(chunkCoord, chunk);
        return chunk;
    }

    public Vector3Int GetChunkCoordOfPoint(Vector3 point) {
        return new Vector3Int(
            Mathf.FloorToInt(point.x / chunkSize),
            Mathf.FloorToInt(point.y / chunkSize),
            Mathf.FloorToInt(point.z / chunkSize)
        );
    }

    public float SampleTerrain(Vector3 point) {
        Vector3 pointInChunk = new Vector3Int();
        Vector3Int chunkIndex = new Vector3Int();

        chunkIndex.x = Mathf.FloorToInt(point.x / chunkSize);
        pointInChunk.x = point.x % chunkSize;
        if (pointInChunk.x < 0)
            pointInChunk.x += chunkSize;

        chunkIndex.y = Mathf.FloorToInt(point.y / chunkSize);
        pointInChunk.y = point.y % chunkSize;
        if (pointInChunk.y < 0)
            pointInChunk.y += chunkSize;

        chunkIndex.z = Mathf.FloorToInt(point.z / chunkSize);
        pointInChunk.z = point.z % chunkSize;
        if (pointInChunk.z < 0)
            pointInChunk.z += chunkSize;

        if (chunks.ContainsKey(chunkIndex)) {
            return chunks[chunkIndex].GetTerrainAtPoint(pointInChunk);
        } else
            return GetGeneratedTerrainAtPoint(point);
    }

    public Point[] GetChunksOfPoint(Vector3 point) {
        List<Point> pointsAndChunks = new List<Point>();

        List<int> chunkXCoords = new List<int>();
        List<int> chunkYCoords = new List<int>();
        List<int> chunkZCoords = new List<int>();

        if ((Mathf.FloorToInt(point.x % chunkSize) == 0 && point.x >= 0) || (Mathf.FloorToInt(point.x % chunkSize) == 0 && point.x < 0)) {
            chunkXCoords.Add(Mathf.FloorToInt(point.x / chunkSize));
            chunkXCoords.Add(Mathf.FloorToInt(point.x / chunkSize) - 1);
        } else {
            chunkXCoords.Add(Mathf.FloorToInt(point.x / chunkSize));
        }

        if (Mathf.FloorToInt(point.y % chunkSize) == 0) {
            chunkYCoords.Add(Mathf.FloorToInt(point.y / chunkSize));
            chunkYCoords.Add(Mathf.FloorToInt(point.y / chunkSize) - 1);
        } else {
            chunkYCoords.Add(Mathf.FloorToInt(point.y / chunkSize));
        }

        if (Mathf.FloorToInt(point.z % chunkSize) == 0) {
                chunkZCoords.Add(Mathf.FloorToInt(point.z / chunkSize));
                chunkZCoords.Add(Mathf.FloorToInt(point.z / chunkSize) - 1);
        } else {
            chunkZCoords.Add(Mathf.FloorToInt(point.z / chunkSize));
        }

        foreach (int xCoord in chunkXCoords) {
            foreach (int yCoord in chunkYCoords) {
                foreach (int zCoord in chunkZCoords) {
                    Point pointAndChunk = new Point();
                    pointAndChunk.chunkIndex = new Vector3Int(xCoord, yCoord, zCoord);
                    // Debug.Log(pointAndChunk.chunkIndex);
                    if (chunks.ContainsKey(pointAndChunk.chunkIndex))
                        pointAndChunk.point = chunks[pointAndChunk.chunkIndex].GetLocalCoordsFromWorldCoords(point);
                    else {
                        pointAndChunk.point = new Vector3(
                            point.x - pointAndChunk.chunkIndex.x * chunkSize,
                            point.y - pointAndChunk.chunkIndex.y * chunkSize,
                            point.z - pointAndChunk.chunkIndex.z * chunkSize
                        );
                    }
                    pointsAndChunks.Add(pointAndChunk);
                }
            }
        }

        // Debug.Log(pointsAndChunks.Count);
        return pointsAndChunks.ToArray();
    }

    public Vector3Int[] SetTerrainAtPoint(Vector3 point, float value) {
        Point[] points = GetChunksOfPoint(point);
        List<Vector3Int> chunkIndexes = new List<Vector3Int>();
        foreach (Point p in points) {
            if (!chunks.ContainsKey(p.chunkIndex)) 
                GenerateChunk(p.chunkIndex);
            
            chunks[p.chunkIndex].SetTerrainAtIndex(new Vector3Int(
                Mathf.FloorToInt(p.point.x * chunks[p.chunkIndex].VoxelsPerUnit),
                Mathf.FloorToInt(p.point.y * chunks[p.chunkIndex].VoxelsPerUnit),
                Mathf.FloorToInt(p.point.z * chunks[p.chunkIndex].VoxelsPerUnit)
            ), value);

            chunkIndexes.Add(p.chunkIndex);
        }

        return chunkIndexes.ToArray();
    }

    public float GetGeneratedTerrainAtPoint(Vector3 point) {
        return terrainManager.GetTerrainAtPoint(point);
    }
}

public struct Point {
    public Vector3Int chunkIndex;
    public Vector3 point;

    public override bool Equals(object obj) {
        if (obj == null || GetType() != obj.GetType())
        {
            return false;
        }

        Point other = (Point) obj;
        return chunkIndex == other.chunkIndex && point == other.point;
    }
    
    public override int GetHashCode() {
        return chunkIndex.GetHashCode() * point.GetHashCode();
    }

    public override string ToString()
    {
        return "Point " + point.ToString() + " in Chunk at Index " + chunkIndex.ToString();
    }
}
