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
    
    
    public Sphere[] spheres;

    public float GetSphereNoiseAtPoint(int numLayers, float lacunarity, float persistence, float scale, Vector3 point) {
        float noiseValue = 0;
        float frequency = scale / 100;
        float amplitude = 1;

        for (int i = 0; i < numLayers; i ++) {
            float n = Mathf.Abs(noise.snoise(point * frequency)*2-1);
            //n*=n;
            noiseValue += n * amplitude;

            amplitude *= persistence;
            frequency *= lacunarity;
        }

        return noiseValue;
    }
    
    public float GetTerrainAtPoint(Vector3 point) {
        float value = 0;
        if (noiseMode == NoiseMode.PerlinNoise) {
            value += noise.cnoise(point * scale) * amplitude;
        } else if (noiseMode == NoiseMode.Sphere) {
            float maxD = (Vector3.one * planetRadius / 2f).magnitude;

            // float fudge = 1.325f * planetRadius;
            float fudge = 2.65f;
            value = (maxD + fudge) / point.magnitude - 0.5f;

            float noise = 0f;
            if (noiseHeightMultiplier != 0)
                noise = GetSphereNoiseAtPoint(6, 2, 0.5f, noiseScale, point) * noiseHeightMultiplier;

            value += noise;
        } else if (noiseMode == NoiseMode.FlatTerrain) {
            value += height + 1f - point.y;
        } else {
            value += 0.0f;
        }
        foreach (Sphere sphere in spheres) {
            value += (sphere.radius * sphere.radius) / (point - sphere.center).sqrMagnitude * sphere.strength;
        }
        return value;
    }

    void OnDrawGizmos() {
        if (!showGizmos)
            return;

        if (noiseMode == NoiseMode.Sphere) 
            Gizmos.DrawSphere(Vector3.zero, planetRadius);

        foreach (Sphere sphere in spheres) {
            Gizmos.DrawSphere(sphere.center, sphere.radius);
        }
    }
}

public enum NoiseMode {
    Sphere,
    PerlinNoise,
    FlatTerrain
}

[System.Serializable]
public class Sphere {
    public float radius;
    public float strength;
    public Vector3 center;

    public Sphere() {
        radius = 1f;
        center = Vector3.zero;
        strength = 1f;
    }
}
