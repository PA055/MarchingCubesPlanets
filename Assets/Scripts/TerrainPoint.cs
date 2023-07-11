using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TerrainPoint : MonoBehaviour
{
    [HideInInspector]
    public Chunk chunk;
    [HideInInspector]
    public Vector3Int pointIndex;
    public Vector3 pointInChunk {
        get {
            return (Vector3) pointIndex * chunk.VoxelWidth;
        }
    }
    public bool showCube = false;
    public bool showPoints = false;
    [SerializeField] public float s_terrainValue; 
    [SerializeField] public float terrainValue {
            get {
                return chunk.GetTerrainAtIndex(pointIndex);
            }
            set { 
                if (value != terrainValue) {
                    chunk.SetTerrainAtIndex(pointIndex, value);
                    gameObject.GetComponent<Renderer>().material.color = new Color(value, value, value, 0.5f);
                }
            }
        }

    public void ShowCube(bool showing) {
        showCube = showing;
    }

    public void ShowPoints(bool showing) {
        showPoints = showing;
    }
    
    public void init(Chunk chunk, Vector3Int pointIndex) {
        this.chunk = chunk;
        this.pointIndex = pointIndex;
        gameObject.GetComponent<Renderer>().material.color = new Color(terrainValue, terrainValue, terrainValue, 0.5f);
        gameObject.SetActive(chunk.showGizmos);
    }

    public void Get() {
        s_terrainValue = terrainValue;
    }

    public void Set() {
        terrainValue = s_terrainValue;
    }

    void OnDrawGizmos() {
        transform.localPosition = chunk.GetRelativePositionOfIndex(pointIndex);
        if (showCube) {
            if (chunk.GetWorldSpaceOfIndex(pointIndex).x >= Constants.WORLD_WIDTH || 
                chunk.GetWorldSpaceOfIndex(pointIndex).y >= Constants.WORLD_WIDTH ||
                chunk.GetWorldSpaceOfIndex(pointIndex).z >= Constants.WORLD_WIDTH) {
                    Gizmos.color = Color.red;
                    Gizmos.DrawWireCube(gameObject.transform.position +                                       // POSITION
                            new Vector3(chunk.VoxelWidth / 2, chunk.VoxelWidth / 2, chunk.VoxelWidth / 2),    // CENTER OFFSET
                            new Vector3(chunk.VoxelWidth, chunk.VoxelWidth, chunk.VoxelWidth));               // SIZE
                    return;
            }
            Gizmos.DrawWireCube(gameObject.transform.position +                                               // POSITION
                            new Vector3(chunk.VoxelWidth / 2, chunk.VoxelWidth / 2, chunk.VoxelWidth / 2),    // CENTER OFFSET
                            new Vector3(chunk.VoxelWidth, chunk.VoxelWidth, chunk.VoxelWidth));               // SIZE
        }
        if (showPoints) {
            for (int i = 0; i < 12; i++) {
                Vector3 corner1 = chunk.GetWorldSpaceOfIndex(pointIndex + Constants.CornerTable[Constants.EdgeIndexes[i, 0]]);
                Vector3 corner2 = chunk.GetWorldSpaceOfIndex(pointIndex + Constants.CornerTable[Constants.EdgeIndexes[i, 1]]);

                float corner1Sample = chunk.world.SampleTerrain(corner1);
                float corner2Sample = chunk.world.SampleTerrain(corner2);

                if ((corner1Sample > Constants.TERRAIN_SURFACE && corner2Sample <= Constants.TERRAIN_SURFACE) ||
                    (corner2Sample > Constants.TERRAIN_SURFACE && corner1Sample <= Constants.TERRAIN_SURFACE)) {
                        Gizmos.color = new Color(0, 0, 1, 0.5f);
                        Vector3 spherePos;
                        if (chunk.world.smoothTerrain) {
                            float difference = corner2Sample - corner1Sample;

                            if (difference == 0)
                                difference = 0.5f;
                            else
                                difference = (Constants.TERRAIN_SURFACE - corner1Sample) / difference;

                            spherePos = corner1 + ((corner2 - corner1) * difference);
                        } else {
                            spherePos = (corner1 + corner2) / 2f;
                        }
                    Gizmos.DrawSphere(spherePos, 0.0625f * chunk.VoxelWidth);
                }
            }
        }
    }
}
