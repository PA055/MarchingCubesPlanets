using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(TerraformingCamera))]
public class TerraformingCameraEditor : Editor
{
    private void OnSceneGUI() {
        if (Event.current.type == EventType.MouseDown) {
            Debug.Log("Mouse Down");
            TerraformingCamera terraformingCamera = (TerraformingCamera) target;
            if (Event.current.button == 0)
                terraformingCamera.Terraform(true);
            else if (Event.current.button == 1)
                terraformingCamera.Terraform(false);
        }
    }
}
