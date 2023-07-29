using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Camera))]
public class TerraformingCamera : MonoBehaviour {

    public PlayerController player;
    public World world;
    public float brushSize = 5f;
    public float brushWeight;
    public bool showGizmo = true;
    public Vector3 _hitPoint;
    Camera _cam;

    void Start() {
        if (player.playerMode != PlayerMode.Static) {
            transform.localPosition = new Vector3(0, 1.64f, 0);
            transform.rotation = Quaternion.Euler(90, 0, 0);
        } else {
            transform.localPosition = new Vector3(0, 55, 0);
            transform.rotation = Quaternion.Euler(90, 0, 0);
        }
    }

    void Update() {
        if (_cam == null)
            _cam = GetComponent<Camera>();
        
        if (player.playerMode == PlayerMode.Static) {
            if (Input.GetMouseButtonDown(0))
                Terraform(false);
            else if (Input.GetMouseButtonDown(1))
                Terraform(true);
        }
    }

    void OnDrawGizmos() {
        if (showGizmo) {
            Gizmos.color = Color.yellow;
            Gizmos.DrawWireSphere(_hitPoint, brushSize);
        }
    }

    public void Terraform(bool add) {       
        RaycastHit hit;

        if (Physics.Raycast(_cam.ScreenPointToRay(Input.mousePosition), out hit, 1000)) {
            _hitPoint = hit.point;
            world.Terraform(_hitPoint, brushSize, brushWeight * (add ? 1f : -1f));
        }
    }
}
