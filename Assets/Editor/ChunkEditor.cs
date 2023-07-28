using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(Chunk))]
[CanEditMultipleObjects]
public class ChunkEditor : Editor {
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

    }
}

