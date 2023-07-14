using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(PlayerController))]
public class PlayerControllerEditor : Editor {
    public override void OnInspectorGUI() {
        PlayerController player = (PlayerController) target;

        EditorGUILayout.LabelField("Player Chunk Index: " + player.world.GetChunkCoordOfPoint(player.gameObject.transform.position));

        DrawDefaultInspector();
    }
}

