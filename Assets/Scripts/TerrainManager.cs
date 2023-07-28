using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Mathematics;

public class TerrainManager : MonoBehaviour
{
    public NoiseMode noiseMode;
    public int seed = 0;
    public bool showGizmos;

    [Space]
    [Header("Special Settings")]

    [ConditionalShow(nameof(noiseMode), 0)]
    public float planetRadius = 20f;
    [ConditionalShow(nameof(noiseMode), 0)]
    public float noiseScale = 1f;
    [ConditionalShow(nameof(noiseMode), 0)]
    public float noiseHeightMultiplier = 1f;


    [ConditionalShow(nameof(noiseMode), 1)]
    public float amplitude = 50f;
    [ConditionalShow(nameof(noiseMode), 1)]
    public float scale = 0.05f;


    [ConditionalShow(nameof(noiseMode), 2)]
    public float height = 0f;

}

public enum NoiseMode {
    Sphere,
    PerlinNoise,
    FlatTerrain
}