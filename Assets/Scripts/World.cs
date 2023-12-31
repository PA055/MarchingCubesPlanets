using System.Linq;
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

    [Header("Chunk Generation Settings")]
    public GameObject player;
    public int halfRenderDistanceInChunks = 4;
    public int chunkSize;
    public float surfaceDensityValue;

    [Header("Compute Shaders")]
    public ComputeShader marchingCubesShader;
    public ComputeShader terraformShader;

    [Header("Debug Settings")]
    public bool showChunkOutline = true;

    [HideInInspector]
    public Dictionary<Vector3Int, Chunk> chunks = new Dictionary<Vector3Int, Chunk>();

    System.Diagnostics.Stopwatch timer_terraformingTime;
    long terraformingAverage;
    int numTerraformCalls;

    void Start() {
        timer_terraformingTime = new System.Diagnostics.Stopwatch();
        ClearChunks();
        UpdateChunks();
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
            UpdateChunks();
        }
    }

    public void ClearChunks() {
        while (transform.childCount > 0) {
            DestroyImmediate(transform.GetChild(0).gameObject);
        }
        chunks.Clear();
    }

    public void PrintAllTimers() {
        long[] totals = new long[3] {0, 0, 0};
        foreach (Vector3Int chunkPos in chunks.Keys) {
            long[] chunkTotals = chunks[chunkPos].GetTimerValues();
            totals[0] += chunkTotals[0];
            totals[1] += chunkTotals[1];
            totals[2] += chunkTotals[2];
        }

        Debug.Log("Average Populate Terrain Map: " + totals[2] / chunks.Count + " ms");
        Debug.Log("Average Run Marching Cubes Algorithm: " + totals[0] / chunks.Count + " ms");
        Debug.Log("Average Process Triangle Data: " + totals[1] / chunks.Count + " ms");
        Debug.Log("Average Terraforming Time: " + terraformingAverage + " ms");
        
        Debug.Log("Total Populate Terrain Map: " + totals[2] + " ms");
        Debug.Log("Total Run Marching Cubes Algorithm: " + totals[0] + " ms");
        Debug.Log("Total Process Triangle Data: " + totals[1] + " ms");
        Debug.Log("Total Terraforming Time: " + terraformingAverage * numTerraformCalls + " ms");
    }

    public void UpdateChunks() {
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
        chunk.Init(this, chunkCoord, 1);
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

    public void Terraform(Vector3 point, float radius, float weight) {
        timer_terraformingTime.Start();
        
        Point[] points = GetChunksOfPoint(point + (Vector3) Constants.CornerTable[0] * radius)
                  .Union(GetChunksOfPoint(point + (Vector3) Constants.CornerTable[1] * radius))
                  .Union(GetChunksOfPoint(point + (Vector3) Constants.CornerTable[2] * radius))
                  .Union(GetChunksOfPoint(point + (Vector3) Constants.CornerTable[3] * radius))
                  .Union(GetChunksOfPoint(point + (Vector3) Constants.CornerTable[4] * radius))
                  .Union(GetChunksOfPoint(point + (Vector3) Constants.CornerTable[5] * radius))
                  .Union(GetChunksOfPoint(point + (Vector3) Constants.CornerTable[6] * radius))
                  .Union(GetChunksOfPoint(point + (Vector3) Constants.CornerTable[7] * radius))
                  .Union(GetChunksOfPoint(point + Vector3.up * radius))
                  .Union(GetChunksOfPoint(point + Vector3.down * radius))
                  .Union(GetChunksOfPoint(point + Vector3.left * radius))
                  .Union(GetChunksOfPoint(point + Vector3.right * radius))
                  .Union(GetChunksOfPoint(point + Vector3.forward * radius))
                  .Union(GetChunksOfPoint(point + Vector3.back * radius))
                  .ToArray();
        
        foreach(Point p in points) {
            if (!chunks.ContainsKey(p.chunkIndex))
                GenerateChunk(p.chunkIndex);
            chunks[p.chunkIndex].Terraform(p.point, radius, weight);
        }

        timer_terraformingTime.Stop();
        terraformingAverage = ((terraformingAverage * numTerraformCalls) + timer_terraformingTime.ElapsedMilliseconds) / (numTerraformCalls + 1);
        numTerraformCalls++;
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
