using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// [ExecuteInEditMode]
public class World : MonoBehaviour
{
    [Header("Generation Settings")]
    public PlanetManager planetManager;
    public Material material;
    public bool smoothTerrain = true;
    public bool flatShaded = false;


    [Header("Debug Settings")]
    public GameObject terrainPointPrefab;
    public bool generateGizmos = true;
    [HideInInspector]
    public bool showCube = false;
    [HideInInspector]
    public bool showPoints = false;
    [HideInInspector]
    public bool showGizmos = false;

    Chunk[,,] chunks;

    void Start()
    {
        transform.position -= Constants.CENTER;
        
        RegenerateAllChunks();

        for (int x = 0; x < Constants.WORLD_SIZE_IN_CHUNKS; x++) {
            for (int y = 0; y < Constants.WORLD_SIZE_IN_CHUNKS; y++) {
                for (int z = 0; z < Constants.WORLD_SIZE_IN_CHUNKS; z++) {
                    chunks[x, y, z].RegenerateMesh();
                }
            }
        }

        // Point[] points = GetChunksOfPoint(new Vector3(Constants.CHUNK_SIZE, Constants.CHUNK_SIZE, Constants.CHUNK_SIZE));
        // foreach (Point point in points) {
        //     Debug.Log(point.point.ToString() + " in the chunk at " + point.chunkIndex.ToString());
        // }
    }

    public void RegenerateAllChunks() {
        chunks = new Chunk[Constants.WORLD_SIZE_IN_CHUNKS, Constants.WORLD_SIZE_IN_CHUNKS, Constants.WORLD_SIZE_IN_CHUNKS];
        for (int x = 0; x < Constants.WORLD_SIZE_IN_CHUNKS; x++) {
            for (int y = 0; y < Constants.WORLD_SIZE_IN_CHUNKS; y++) {
                for (int z = 0; z < Constants.WORLD_SIZE_IN_CHUNKS; z++) {
                    GameObject chunkHolder = new GameObject();
                    chunkHolder.name = "Chunk at x: " + x + ", y: " + y + ", z: " + z;
                    chunkHolder.AddComponent<Chunk>();
                    chunkHolder.AddComponent<MeshFilter>();
                    chunkHolder.AddComponent<MeshRenderer>();
                    chunkHolder.AddComponent<MeshCollider>();
                    chunkHolder.transform.parent = transform;
                    chunkHolder.transform.position = new Vector3(x * Constants.CHUNK_SIZE, y * Constants.CHUNK_SIZE, z * Constants.CHUNK_SIZE);
                    Chunk chunk = chunkHolder.GetComponent<Chunk>();
                    chunk.Init(this, new Vector3Int(x, y, z), material, 1);

                    chunks[x, y, z] = chunk;
                }
            }
        }
    }

    public void ToggleGizmos(bool value) {
        this.showGizmos = value;
        for (int x = 0; x < Constants.WORLD_SIZE_IN_CHUNKS; x++) {
            for (int y = 0; y < Constants.WORLD_SIZE_IN_CHUNKS; y++) {
                for (int z = 0; z < Constants.WORLD_SIZE_IN_CHUNKS; z++) {
                    Chunk chunk = chunks[x, y, z];
                    chunk.ToggleGizmos(showGizmos);
                }
            }
        }
    }

    public void ToggleAllCubes(bool value) {
        this.showCube = value;
        for (int x = 0; x < Constants.WORLD_SIZE_IN_CHUNKS; x++) {
            for (int y = 0; y < Constants.WORLD_SIZE_IN_CHUNKS; y++) {
                for (int z = 0; z < Constants.WORLD_SIZE_IN_CHUNKS; z++) {
                    Chunk chunk = chunks[x, y, z];
                    chunk.ToggleAllCubes(showCube);
                }
            }
        }
    }
    
    public void ToggleAllPoints(bool value) {
        this.showPoints = value;
        for (int x = 0; x < Constants.WORLD_SIZE_IN_CHUNKS; x++) {
            for (int y = 0; y < Constants.WORLD_SIZE_IN_CHUNKS; y++) {
                for (int z = 0; z < Constants.WORLD_SIZE_IN_CHUNKS; z++) {
                    Chunk chunk = chunks[x, y, z];
                    chunk.ToggleAllVertices(showPoints);
                }
            }
        }
    }

    public float SampleTerrain(Vector3 point) {
        Vector3 pointInChunk = new Vector3Int();
        Vector3Int chunkIndex = new Vector3Int();

        if (point.x != Constants.WORLD_WIDTH) {
            chunkIndex.x = Mathf.FloorToInt(point.x / Constants.CHUNK_SIZE);
            pointInChunk.x = point.x % Constants.CHUNK_SIZE;
        } else {
            chunkIndex.x = Mathf.FloorToInt(point.x / Constants.CHUNK_SIZE) - 1;
            pointInChunk.x = Constants.CHUNK_SIZE;
        }

        if (point.y != Constants.WORLD_WIDTH) {
            chunkIndex.y = Mathf.FloorToInt(point.y / Constants.CHUNK_SIZE);
            pointInChunk.y = point.y % Constants.CHUNK_SIZE;
        } else {
            chunkIndex.y = Mathf.FloorToInt(point.y / Constants.CHUNK_SIZE) - 1;
            pointInChunk.y = Constants.CHUNK_SIZE;
        }

        if (point.z != Constants.WORLD_WIDTH) {
            chunkIndex.z = Mathf.FloorToInt(point.z / Constants.CHUNK_SIZE);
            pointInChunk.z = point.z % Constants.CHUNK_SIZE;
        } else {
            chunkIndex.z = Mathf.FloorToInt(point.z / Constants.CHUNK_SIZE) - 1;
            pointInChunk.z = Constants.CHUNK_SIZE;
        }

        Chunk chunk = chunks[chunkIndex.x, chunkIndex.y, chunkIndex.z];

        return chunk.GetTerrainAtPoint(pointInChunk);
    }

    public Point[] GetChunksOfPoint(Vector3 point) {
        List<Point> pointsAndChunks = new List<Point>();

        List<int> chunkXCoords = new List<int>();
        List<int> chunkYCoords = new List<int>();
        List<int> chunkZCoords = new List<int>();

        if (Mathf.FloorToInt(point.x % Constants.CHUNK_SIZE) == 0) {
            if (point.x != Constants.WORLD_WIDTH) {
                chunkXCoords.Add(Mathf.FloorToInt(point.x / Constants.CHUNK_SIZE));
            }
            if (point.x != 0) {
                chunkXCoords.Add(Mathf.FloorToInt(point.x / Constants.CHUNK_SIZE) - 1);
            }
        } else {
            chunkXCoords.Add(Mathf.FloorToInt(point.x / Constants.CHUNK_SIZE));
        }

        if (Mathf.FloorToInt(point.y % Constants.CHUNK_SIZE) == 0) {
            if (point.y != Constants.WORLD_WIDTH) {
                chunkYCoords.Add(Mathf.FloorToInt(point.y / Constants.CHUNK_SIZE));
            }
            if (point.y != 0) {
                chunkYCoords.Add(Mathf.FloorToInt(point.y / Constants.CHUNK_SIZE) - 1);
            }
        } else {
            chunkYCoords.Add(Mathf.FloorToInt(point.y / Constants.CHUNK_SIZE));
        }

        if (Mathf.FloorToInt(point.z % Constants.CHUNK_SIZE) == 0) {
            if (point.z != Constants.WORLD_WIDTH) {
                chunkZCoords.Add(Mathf.FloorToInt(point.z / Constants.CHUNK_SIZE));
            }
            if (point.z != 0) {
                chunkZCoords.Add(Mathf.FloorToInt(point.z / Constants.CHUNK_SIZE) - 1);
            }
        } else {
            chunkZCoords.Add(Mathf.FloorToInt(point.z / Constants.CHUNK_SIZE));
        }

        foreach (int xCoord in chunkXCoords) {
            foreach (int yCoord in chunkYCoords) {
                foreach (int zCoord in chunkZCoords) {
                    // Debug.Log(new Vector3Int(xCoord, yCoord, zCoord));
                    Point pointAndChunk = new Point();
                    pointAndChunk.chunkIndex = new Vector3Int(xCoord, yCoord, zCoord);
                    pointAndChunk.point = chunks[xCoord, yCoord, zCoord].GetLocalCoordsFromWorldCoords(point);
                    pointsAndChunks.Add(pointAndChunk);
                }
            }
        }

        // Debug.Log(pointsAndChunks.Count);
        return pointsAndChunks.ToArray();
    }

    public float GetTerrainAtPoint(Vector3 point) {
        return planetManager.GetTerrainAtPoint(point);
    }
}

public struct Point {
    public Vector3Int chunkIndex;
    public Vector3 point;
}
