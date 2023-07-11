using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanetManager : MonoBehaviour
{
    public float planetRadius;

    public float GetNoiseAtPoint(Vector3 point) {
        return 0.0f;
    }
    
    public float GetTerrainAtPoint(Vector3 point) {
        Vector3 centerToPoint = point - Constants.CENTER;
        return centerToPoint.magnitude - planetRadius + 0.500001f + GetNoiseAtPoint(point);
    }
}
