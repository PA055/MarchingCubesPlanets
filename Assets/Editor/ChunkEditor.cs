using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(Chunk))]
[CanEditMultipleObjects]
public class ChunkEditor : Editor {
    public float threshold = 0.5f;

    public override void OnInspectorGUI() {
        Chunk chunk = (Chunk) target;
        
        if (GUILayout.Button("Print Debug Info"))
            chunk.PrintTimers();

        DrawDefaultInspector();

        EditorGUILayout.LabelField("Number of Voxels Per Axis: " + chunk.PointsPerAxis.ToString());
        EditorGUILayout.LabelField("Voxel Width: " + chunk.VoxelWidth.ToString());

        EditorGUILayout.LabelField("Chunk Position: " + chunk.chunkIndex.ToString());

        if (GUILayout.Button("Regenerate Chunk"))
            chunk.RegenerateMesh();
        

        if (chunk.transform.childCount == 0) {
            if (GUILayout.Button("Generate Terrain Points"))
                chunk.DrawWidgets();
        } else {

            if (GUILayout.Button((chunk.showingCubes ? "Hide" : "Show") + " All Cubes"))
                chunk.ToggleAllCubes(!chunk.showingCubes);

            if (GUILayout.Button((chunk.showingCubes ? "Hide" : "Show") + " All Vertices"))
                chunk.ToggleAllVertices(!chunk.showingVertices);

            if (GUILayout.Button((chunk.showGizmos ? "Hide" : "Show") + " All Gizmos"))
                chunk.ToggleGizmos(!chunk.showGizmos);

            threshold = EditorGUILayout.FloatField("Threshold", threshold);

            if (GUILayout.Button((chunk.showGizmos ? "Hide" : "Show") + " Gizmos Below Threshold"))
                chunk.ToggleGizmosBelowThreshold(!chunk.showGizmos, threshold);

            if (GUILayout.Button((chunk.showGizmos ? "Hide" : "Show") + " Gizmos Above Threshold"))
                chunk.ToggleGizmosAboveThreshold(!chunk.showGizmos, threshold);
        }

    }
}

