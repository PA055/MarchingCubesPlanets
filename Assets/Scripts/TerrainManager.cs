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

    // [ConditionalShow(nameof(noiseMode), 0)]
    public Sphere[] spheres;


    [ConditionalShow(nameof(noiseMode), 1)]
    public float amplitude = 50f;
    [ConditionalShow(nameof(noiseMode), 1)]
    public float scale = 0.05f;


    [ConditionalShow(nameof(noiseMode), 2)]
    public float height = 0f;

    public float GetNoiseAtPoint(Vector3 point) {
        return 0.0f;
    }
    
    public float GetTerrainAtPoint(Vector3 point) {
        float value = 0;
        if (noiseMode == NoiseMode.PerlinNoise) {
            value += noise.cnoise(point * scale) * amplitude;
        } else if (noiseMode == NoiseMode.Sphere) {
        } else if (noiseMode == NoiseMode.FlatTerrain) {
            value += height + 0.5f - point.y;
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
        

        if (noiseMode == NoiseMode.Sphere) {
            foreach (Sphere sphere in spheres) {
                Gizmos.DrawSphere(sphere.center, sphere.radius);
            }
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
