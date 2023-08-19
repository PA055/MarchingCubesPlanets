using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IKLimb : MonoBehaviour {
    public IKLimb prev;
    public float distance;

    public Mesh mesh;

    [Header("Angle Constraints")]
    public float xAxisMax;
    public float xAxisMin;
    [Space(5)]
    public float yAxisMax;
    public float yAxisMin;
    [Space(5)]
    public float zAxisMax;
    public float zAxisMin;


    void OnDrawGizmosSelected() {
        
    }
}