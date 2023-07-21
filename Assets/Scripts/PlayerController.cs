using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(CapsuleCollider))]
public class PlayerController : MonoBehaviour
{
    public PlayerMode playerMode;

    public World world;
    public Camera playerCamera;
    public Vector3 planetCenter;
    public float brushSize = 2f; 
    public bool alignToPlanet = true;
    public float lookXLimit = 60.0f;
    public float lookSpeed = 2.0f;
    public float speed = 5.0f;
    public float jumpHeight = 2.0f;
    public bool canJump = true;
    public float gravity = 9.8f;

    bool grounded = false;
    Rigidbody r;
    Vector2 rotation = Vector2.zero;
    float maxVelocityChange = 10.0f;

    void Awake()
    {
        if (playerMode == PlayerMode.Static)
            return;

        r = GetComponent<Rigidbody>();
        r.freezeRotation = true;
        r.useGravity = false;
        r.collisionDetectionMode = CollisionDetectionMode.ContinuousDynamic;
        rotation.y = transform.eulerAngles.y;

        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }

    void Update() {
        if (playerMode == PlayerMode.Static)
            return;

        // Player and Camera rotation
        rotation.x += -Input.GetAxis("Mouse Y") * lookSpeed;
        rotation.x = Mathf.Clamp(rotation.x, -lookXLimit, lookXLimit);
        playerCamera.transform.localRotation = Quaternion.Euler(rotation.x, 0, 0);
        Quaternion localRotation = Quaternion.Euler(0f, Input.GetAxis("Mouse X") * lookSpeed, 0f);
        transform.rotation = transform.rotation * localRotation;

        RaycastHit hitInfo;
        if (Input.GetMouseButton(0)) {
            if (Physics.Raycast(playerCamera.transform.position, playerCamera.transform.forward, out hitInfo, 100.0f)) {
                DrawSphere(hitInfo.point, brushSize, true);
            }
        }

        if (Input.GetMouseButton(1)) {
            if (Physics.Raycast(playerCamera.transform.position, playerCamera.transform.forward, out hitInfo, 100.0f)) {
                DrawSphere(hitInfo.point, brushSize, false);
            }
        }

        RaycastHit hit;
        if (world.SampleTerrain(transform.position) > world.surfaceDensityValue) {
            if (Physics.Raycast(transform.position, transform.up, out hit, 100f, LayerMask.NameToLayer("Terrain"))) {
                transform.position = hit.point;
            }
        }
    }

    void FixedUpdate()
    {
        if (playerMode == PlayerMode.Static)
            return;

        if (playerMode == PlayerMode.Planet) {
            Vector3 toCenter = planetCenter - transform.position;
            toCenter.Normalize();

            r.AddForce(toCenter * gravity, ForceMode.Acceleration);

            if (alignToPlanet) {
                Quaternion q = Quaternion.FromToRotation(transform.up, -toCenter);
                q = q * transform.rotation;
                transform.rotation = Quaternion.Slerp(transform.rotation, q, 1);
            }

            if (grounded) {
                // Calculate how fast we should be moving
                Vector3 forwardDir = Vector3.Cross(transform.up, -playerCamera.transform.right).normalized;
                Vector3 rightDir = Vector3.Cross(transform.up, playerCamera.transform.forward).normalized;
                Vector3 targetVelocity = (forwardDir * Input.GetAxis("Vertical") + rightDir * Input.GetAxis("Horizontal")) * speed;

                Vector3 velocity = transform.InverseTransformDirection(r.velocity);
                velocity.y = 0;
                velocity = transform.TransformDirection(velocity);
                Vector3 velocityChange = transform.InverseTransformDirection(targetVelocity - velocity);
                velocityChange.x = Mathf.Clamp(velocityChange.x, -maxVelocityChange, maxVelocityChange);
                velocityChange.z = Mathf.Clamp(velocityChange.z, -maxVelocityChange, maxVelocityChange);
                velocityChange.y = 0;
                velocityChange = transform.TransformDirection(velocityChange);

                r.AddForce(velocityChange, ForceMode.VelocityChange);

                if (Input.GetButton("Jump") && canJump)
                {
                    r.AddForce(transform.up * jumpHeight, ForceMode.VelocityChange);
                }
            }
        }

        if (playerMode == PlayerMode.Plane) {
            Vector3 forwardDir = playerCamera.transform.forward.normalized;
            Vector3 rightDir = playerCamera.transform.right.normalized;
            Vector3 upDir = playerCamera.transform.up.normalized;
            Vector3 targetVelocity = (forwardDir * Input.GetAxis("Vertical") + rightDir * Input.GetAxis("Horizontal") + upDir * Input.GetAxis("Elevation")) * speed;

            Vector3 velocity = transform.InverseTransformDirection(r.velocity);
            velocity = transform.TransformDirection(velocity);
            Vector3 velocityChange = transform.InverseTransformDirection(targetVelocity - velocity);
            velocityChange.x = Mathf.Clamp(velocityChange.x, -maxVelocityChange, maxVelocityChange);
            velocityChange.y = Mathf.Clamp(velocityChange.y, -maxVelocityChange, maxVelocityChange);
            velocityChange.z = Mathf.Clamp(velocityChange.z, -maxVelocityChange, maxVelocityChange);
            velocityChange = transform.TransformDirection(velocityChange);

            r.AddForce(velocityChange, ForceMode.VelocityChange);
        }
        
        if (playerMode == PlayerMode.Normal) {
            r.AddForce(Vector3.down * gravity, ForceMode.Acceleration);

            if (grounded) {
                Vector3 forwardDir = playerCamera.transform.forward.normalized;
                Vector3 rightDir = playerCamera.transform.right.normalized;
                Vector3 targetVelocity = (forwardDir * Input.GetAxis("Vertical") + rightDir * Input.GetAxis("Horizontal")) * speed;

                Vector3 velocity = transform.InverseTransformDirection(r.velocity);
                velocity.y = 0;
                velocity = transform.TransformDirection(velocity);
                Vector3 velocityChange = transform.InverseTransformDirection(targetVelocity - velocity);
                velocityChange.x = Mathf.Clamp(velocityChange.x, -maxVelocityChange, maxVelocityChange);
                velocityChange.z = Mathf.Clamp(velocityChange.z, -maxVelocityChange, maxVelocityChange);
                velocityChange.y = 0;
                velocityChange = transform.TransformDirection(velocityChange);

                r.AddForce(velocityChange, ForceMode.VelocityChange);

                if (Input.GetButton("Jump") && canJump)
                {
                    r.AddForce(transform.up * jumpHeight, ForceMode.VelocityChange);
                }
            }
        }
    }

    void OnCollisionStay(Collision other) {
        grounded = true;
    }

    void OnCollisionExit(Collision other) {
        grounded = false;
    }

    void DrawSphere(Vector3 originPoint, float radius, bool addTerrain) {
        List<Vector3Int> chunksToReload = new List<Vector3Int>();

        for (float x = originPoint.x - radius; x < originPoint.x + radius; x += 1) {
            for (float y = originPoint.y - radius; y < originPoint.y + radius; y += 1) {
                for (float z = originPoint.z - radius; z < originPoint.z + radius; z += 1) {
                    Vector3 point = new Vector3(x, y, z);
                    float dstToOrigin = (point - originPoint).magnitude;
                    if (dstToOrigin <= radius) {
                    // if (true) {
                        float pointValue = world.SampleTerrain(point);
                        if (addTerrain)
                            pointValue += (radius * radius) / (point - originPoint).sqrMagnitude;
                        else
                            pointValue -= (radius * radius) / (point - originPoint).sqrMagnitude;
                        if (float.IsFinite(pointValue)) {
                            Vector3Int[] chunks = world.SetTerrainAtPoint(point, pointValue);
                            foreach (Vector3Int i in chunks) {
                                if (!chunksToReload.Contains(i))
                                    chunksToReload.Add(i);
                            }
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

public enum PlayerMode {
    Planet,
    Normal,
    Plane,
    Static
}
