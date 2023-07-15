using System.Security.Cryptography;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TerrainManager : MonoBehaviour
{
    public NoiseMode noiseMode;
    public int seed = 0;
    [ConditionalShow(nameof(noiseMode), 0)]
    public float planetRadius;

    public float GetNoiseAtPoint(Vector3 point) {
        return 0.0f;
    }
    
    public float GetTerrainAtPoint(Vector3 point) {
        if (noiseMode == NoiseMode.PerlinNoise) {
            return PerlinNoise3D.Get3DPerlinNoise(point * 0.05f) * 50f;
        } else if (noiseMode == NoiseMode.Sphere) {
            Vector3 centerToPoint = point - Vector3.zero;
            return centerToPoint.magnitude - planetRadius + 0.500001f + GetNoiseAtPoint(point);
        } else if (noiseMode == NoiseMode.FlatTerrain) {
            return point.y;
        } else {
            return 0.0f;
        }
    }
}

public enum NoiseMode {
    Sphere,
    PerlinNoise,
    FlatTerrain
}
