using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(TerrainPoint))]
[CanEditMultipleObjects]
public class TerrainPointEditor : Editor {
    SerializedProperty s_terrainValue;

    void FindProperties() {
        m_targets.ForEach( obj => obj.Get() );
        s_terrainValue = serializedObject.FindProperty("s_terrainValue");
    }

    void DrawGUI() {
        EditorGUILayout.PropertyField(s_terrainValue, new GUIContent("Terrain Value"));
    }

    TerrainPoint m_target;
    List<TerrainPoint> m_targets;

    void CastTargets()
    {
        m_target = ( TerrainPoint ) target;
        m_targets = new List<TerrainPoint>();
        foreach (var t in targets) 
        {
            TerrainPoint obj = ( TerrainPoint ) t;
            m_targets.Add( obj );
        }
    }

    void OnEnable()
    {
        CastTargets();
        FindProperties();
    }

    public override void OnInspectorGUI() {
        // serializedObject.Update();

        // DrawGUI();

        // serializedObject.ApplyModifiedProperties();

        // m_targets.ForEach( obj => obj.Set() );

        TerrainPoint terrainPoint = (TerrainPoint)target;

        EditorGUILayout.LabelField("Density Value: " + terrainPoint.chunk.GetTerrainAtIndex(terrainPoint.pointIndex));

        EditorGUILayout.LabelField("Index in Chunk: " + terrainPoint.pointIndex.ToString());
        EditorGUILayout.LabelField("Position in Chunk: " + terrainPoint.pointInChunk.ToString());
        EditorGUILayout.LabelField("Position in World: " + terrainPoint.chunk.GetWorldSpaceOfIndex(terrainPoint.pointIndex).ToString());

        if (GUILayout.Button((terrainPoint.showCube ? "Hide" : "Show") + " Cube"))
            terrainPoint.ShowCube(!terrainPoint.showCube);
        if (GUILayout.Button((terrainPoint.showPoints ? "Hide" : "Show") + " Vertices"))
            terrainPoint.ShowPoints(!terrainPoint.showPoints);
    }
}
