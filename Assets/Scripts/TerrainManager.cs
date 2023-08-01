using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Mathematics;
using System;

public class TerrainManager : MonoBehaviour
{
    public World world;

    public NoiseMode noiseMode;
    public int seed = 0;
    public bool showGizmos;

    [Space]
    [Header("Compute Shaders")]
    public ComputeShader sphereShader;
    public ComputeShader mountainousPlanetShader;
    public ComputeShader flatPlaneShader;
    public ComputeShader pureNoiseShader;

    [Space]
    [Header("Special Settings")]

    [ConditionalShow(nameof(noiseMode), 0)]
    public float planetRadius = 20f;
    

    [ConditionalShow(nameof(noiseMode), 1)]
    public float basePlanetRadius = 20f;
    [ConditionalShow(nameof(noiseMode), 1)]
    public float noiseScale = 50f;
    [ConditionalShow(nameof(noiseMode), 1)]
    public float noiseFrequency = 0.05f;
    [ConditionalShow(nameof(noiseMode), 1)]
    public float heightMultiplier = 1;
    [ConditionalShow(nameof(noiseMode), 1)]
    public float heightModifier = 1;
    [ConditionalShow(nameof(noiseMode), 1)]
    public AnimationCurve heightCurve;  


    [ConditionalShow(nameof(noiseMode), 2)]
    public float height = 0f;


    [ConditionalShow(nameof(noiseMode), 3)]
    public float scale = 0.05f;

    public void PopulateTerrainMap(ref RenderTexture densityTexture, Vector3Int chunkIndex)
    {
        ComputeShader densityMapShader;
        if (noiseMode == NoiseMode.Sphere)
            densityMapShader = sphereShader;
        else if (noiseMode == NoiseMode.MountainousPlanet)
            densityMapShader = mountainousPlanetShader;
        else if (noiseMode == NoiseMode.FlatPlane)
            densityMapShader = flatPlaneShader;
        else
            densityMapShader = pureNoiseShader;

        int kernel = densityMapShader.FindKernel("GetDensityMap");
        densityMapShader.SetTexture(kernel, "densityMap", densityTexture);
        densityMapShader.SetInt("textureSize", densityTexture.width);
        densityMapShader.SetVector("chunkCoords", (Vector3) chunkIndex);
        densityMapShader.SetFloat("chunkSize", world.chunkSize);

        if (noiseMode == NoiseMode.Sphere) {
            densityMapShader.SetFloat("planetRadius", planetRadius);

        } else if (noiseMode == NoiseMode.MountainousPlanet) {
            densityMapShader.SetFloat("planetRadius", basePlanetRadius);
            densityMapShader.SetFloat("noiseFrequency", noiseFrequency);
            densityMapShader.SetFloat("noiseScale", noiseScale);
            densityMapShader.SetFloat("heightMultiplier", heightMultiplier);
            
        } else if (noiseMode == NoiseMode.FlatPlane) {
            densityMapShader.SetFloat("planeHeight", height);

        } else {
            densityMapShader.SetFloat("noiseScale", scale);
        }

        densityMapShader.Dispatch(kernel, Mathf.CeilToInt(densityTexture.width / 8f), Mathf.CeilToInt(densityTexture.width / 8f), Mathf.CeilToInt(densityTexture.width / 8f));
    }
}

public enum NoiseMode {
    Sphere,
    MountainousPlanet,
    FlatPlane,
    PureNoise
}