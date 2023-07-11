using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(World))]
[CanEditMultipleObjects]
public class WorldEditor : Editor {
    public override void OnInspectorGUI() {
        DrawDefaultInspector();

        World world = (World) target;

        if (GUILayout.Button((world.showGizmos ? "Hide" : "Show") + " Gizmos")) 
            world.ToggleGizmos(!world.showGizmos);

        if (GUILayout.Button((world.showCube ? "Hide" : "Show") + " Cubes")) 
            world.ToggleAllCubes(!world.showCube);
        
        if (GUILayout.Button((world.showPoints ? "Hide" : "Show") + " Vertices")) 
            world.ToggleAllPoints(!world.showPoints);
    }
}