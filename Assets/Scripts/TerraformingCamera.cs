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
            if (Input.GetMouseButton(0)) {
                Terraform(true);
            } else if (Input.GetMouseButton(1))
                Terraform(false);
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
            DrawSphere(_hitPoint, brushSize, brushWeight * (add ? 1f : -1f));
        }
    }

    void DrawSphere(Vector3 originPoint, float radius, float weight) {
        List<Vector3Int> chunksToReload = new List<Vector3Int>();

        for (float x = originPoint.x - (radius * 2); x < originPoint.x + (radius * 2); x += 1) {
            for (float y = originPoint.y - (radius * 2); y < originPoint.y + (radius * 2); y += 1) {
                for (float z = originPoint.z - (radius * 2); z < originPoint.z + (radius * 2); z += 1) {
                    Vector3 point = new Vector3(x, y, z);
                    Vector3 offset = point - originPoint;
                    float sqrDst = Vector3.Dot(offset, offset);

                    if (sqrDst <= radius * radius) {
                        float dst = Mathf.Sqrt(sqrDst);
                        float brushWeight = 1 - Mathf.SmoothStep(radius * 0.7f, radius, dst);

                        float pointValue = world.SampleTerrain(point);
                        pointValue += weight * Time.deltaTime * brushWeight;
                        if (!float.IsFinite(pointValue)){
                            if (pointValue > 0)
                                pointValue = 100;
                            else
                                pointValue = -100;
                        }

                        Vector3Int[] chunks = world.SetTerrainAtPoint(point, pointValue);
                        foreach (Vector3Int i in chunks) {
                            if (!chunksToReload.Contains(i))
                                chunksToReload.Add(i);
                        }
                    }
                }
            }
        }

        foreach (Vector3Int i in chunksToReload) {
            // Debug.Log("Final: " + i.ToString());
            world.chunks[i].RegenerateMesh();
        }
    }
}
