using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Camera))]
[ExecuteInEditMode]
public class TerraformingCamera : MonoBehaviour {
    public World world;
    public float brushSize = 5f;
    public Vector3 _hitPoint;
    Camera _cam;

    void Start() {
        if (Application.isPlaying) {
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
    }

    void LateUpdate2() {
        if (!Application.isPlaying) {
            if (Input.GetMouseButton(0)) {
                Debug.Log("Left Button Down");
                Terraform(true);
            } else if (Input.GetMouseButton(1))
                Terraform(false);
        }
    }

    void OnDrawGizmos() {
        Gizmos.color = Color.yellow;
        Gizmos.DrawWireSphere(_hitPoint, brushSize);
    }

    public void Terraform(bool add) {
        Debug.Log("Terraform");
        if (Application.isPlaying)
            return;
        
        RaycastHit hit;

        if (Physics.Raycast(_cam.ScreenPointToRay(Input.mousePosition), out hit, 1000)) {
            _hitPoint = hit.point;
            Debug.Log(_hitPoint.ToString());
        }
    }

    void DrawSphere(Vector3 originPoint, float radius, bool addTerrain) {
        List<Point> points = new List<Point>();

        for (float x = originPoint.x - radius / 2f; x < originPoint.x + radius / 2f; x += 1) {
            for (float y = originPoint.y - radius / 2f; y < originPoint.y + radius / 2f; y += 1) {
                for (float z = originPoint.z - radius / 2f; z < originPoint.z + radius / 2f; z += 1) {
                    Vector3 point = new Vector3(x, y, z);
                    float dstToOrigin = (point - originPoint).magnitude;
                    float pointValue = world.SampleTerrain(point);
                    if (addTerrain)
                        pointValue -= dstToOrigin;
                    else
                        pointValue += dstToOrigin;
                    Point[] pointPoints = world.SetTerrainAtPoint(point, pointValue);
                    foreach (Point p in pointPoints) {
                        if (!points.Contains(p))
                            points.Add(p);
                    }
                }
            }
        }

        foreach (Point p in points) {
            Debug.Log(p.chunkIndex);
            world.chunks[p.chunkIndex].RegenerateMesh();
        }
    }
}
