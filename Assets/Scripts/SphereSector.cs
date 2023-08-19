using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using UnityEngine;
using UnityEngine.UI;
using UnityEditor.UIElements;

public class SphereSector : MonoBehaviour {
    public Mesh mesh;
    public float resolution = 2f;
    public float radius = 1f;
    
    [Space(10)]
    public int ThetaMin;
    public int ThetaMax;
    [Space(3)]
    public int PhiMin;
    public int PhiMax;
    [Space(10)]
    
    public Vector3[] vertices;
    public string[] names;


    void Start() {
        ThetaMax = ThetaMax % 360;
        ThetaMin = ThetaMin % 360;
        PhiMax = PhiMax % 360;
        PhiMin = PhiMin % 360;

        mesh = new Mesh();

        ConstructMesh();

        MeshFilter mf = gameObject.GetComponent<MeshFilter>();
        mf.mesh = mesh;
    }


    private float DegreetoRadians(float Degrees) {
        float rads = Degrees * Mathf.Deg2Rad;
        return rads;
    }


    public void ConstructMesh() {
        int index1 = Mathf.CeilToInt((ThetaMax - ThetaMin) * resolution);
        int index2 = Mathf.CeilToInt((PhiMax - PhiMin) * resolution);
        Debug.Log("# Theta: " + index1.ToString() + ", # Phi: " + index2.ToString() + ", # Total: " + (index1 * index2).ToString());
        vertices = new Vector3[index1 * index2];
        names = new string[vertices.Length];
        int[,] temp = new int[index1, index2];
        int no = 0;
        for (int i = 0; i < index1; i++)
        {
            float theta = ((1f / resolution * i) + ThetaMax) * Mathf.Deg2Rad;
            for (int j = 0; j < index2; j++, no++)
            {               
                float phi = ((1f / resolution * j) + PhiMin) * Mathf.Deg2Rad;
                float x = (radius / 2f) * Mathf.Sin(theta) * Mathf.Cos(phi);
                float z = (radius / 2f) * Mathf.Sin(theta) * Mathf.Sin(phi);
                float y = (radius / 2f) * Mathf.Cos(theta);
                vertices[no] = new Vector3(x, y, z);
                names[no] = "Vertex #: " + no.ToString() + ", Theta: " + i.ToString() + ", Phi: " + j.ToString() + ", Pos: " + vertices[no].ToString();
                temp[i, j] = no;
            }
        }

        int[] triangles = new int[(index1 - 1) * (index2 - 1) * 6];
        int triIndex = 0;
        for (int i = 0; i < index1-1; i++)
        {
            for (int j = 0; j < index2-1; j++)
            {
                triangles[triIndex + 0] = temp[i + 0, j + 1];
                triangles[triIndex + 1] = temp[i + 1, j + 1];
                triangles[triIndex + 2] = temp[i + 0, j + 0];

                triangles[triIndex + 3] = temp[i + 1, j + 1];
                triangles[triIndex + 4] = temp[i + 1, j + 0];
                triangles[triIndex + 5] = temp[i + 0, j + 0];

                triIndex += 6;
            }
        }

        mesh.Clear();
        mesh.vertices = vertices;
        mesh.triangles = triangles;
        mesh.RecalculateNormals();
    }
}