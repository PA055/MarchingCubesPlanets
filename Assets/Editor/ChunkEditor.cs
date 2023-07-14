using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(Chunk))]
[CanEditMultipleObjects]
public class ChunkEditor : Editor {
    public float threshold = 0.5f;

    public override void OnInspectorGUI() {
        DrawDefaultInspector();

        Chunk chunk = (Chunk) target;

        EditorGUILayout.LabelField("Number of Voxels Per Axis: " + chunk.VoxelsPerAxis.ToString());
        EditorGUILayout.LabelField("Voxel Width: " + chunk.VoxelWidth.ToString());

        EditorGUILayout.LabelField("Chunk Position: " + chunk.chunkIndex.ToString());

        if (GUILayout.Button("Regenerate Chunk"))
            chunk.RegenerateMesh();

        // if (GUILayout.Button("Clear Mesh"))
        //     chunk.ClearMesh();

        // if (GUILayout.Button((chunk.showingCubes ? "Hide" : "Show") + " All Cubes"))
        //     chunk.ToggleAllCubes(!chunk.showingCubes);

        // if (GUILayout.Button((chunk.showingCubes ? "Hide" : "Show") + " All Vertices"))
        //     chunk.ToggleAllVertices(!chunk.showingVertices);

        // if (GUILayout.Button((chunk.showGizmos ? "Hide" : "Show") + " All Gizmos"))
        //     chunk.ToggleGizmos(!chunk.showGizmos);

        // threshold = EditorGUILayout.FloatField("Threshold", threshold);

        // if (GUILayout.Button((chunk.showGizmos ? "Hide" : "Show") + " Gizmos Below Threshold"))
        //     chunk.ToggleGizmosBelowThreshold(!chunk.showGizmos, threshold);

        // if (GUILayout.Button((chunk.showGizmos ? "Hide" : "Show") + " Gizmos Above Threshold"))
        //     chunk.ToggleGizmosAboveThreshold(!chunk.showGizmos, threshold);
    }
}

