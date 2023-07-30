using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(CapsuleCollider))]
public class PlayerController : MonoBehaviour
{
    public PlayerMode playerMode;
    [Space]
    public World world;
    public Camera playerCamera;
    public LayerMask terrainMask;

    [Header("Player Settings")]
    public float brushSize = 2f; 
    public float brushWeight = 20f;
    public float lookXLimit = 60.0f;
    public float lookSpeed = 2.0f;
    public float speed = 5.0f;
    public float jumpHeight = 2.0f;
    public bool canJump = true;
    public float gravity = 9.8f;

    [Header("Planet Mode Settings")]
    [ConditionalShow(nameof(playerMode), 0)]
    public bool alignToPlanet = true;
    [ConditionalShow(nameof(playerMode), 0)]
    public Vector3 planetCenter;


    bool grounded = false;
    Rigidbody r;
    Vector2 rotation = Vector2.zero;
    float maxVelocityChange = 10.0f;
    Vector3 hp, a, b;
    bool firstFrame = true;
    bool terraTest = false;

    void Awake() {
        firstFrame = true;
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

        if (firstFrame) {
            RaycastHit hit;
            if (Physics.SphereCast(transform.position, 0.5f, transform.up, out hit, 10000f, terrainMask))
                transform.position = hit.point;
            firstFrame = false;
        }

        // Player and Camera rotation
        rotation.x += -Input.GetAxis("Mouse Y") * lookSpeed;
        rotation.x = Mathf.Clamp(rotation.x, -lookXLimit, lookXLimit);
        rotation.y = Input.GetAxis("Mouse X") * lookSpeed;
        playerCamera.transform.localRotation = Quaternion.Euler(rotation.x, 0, 0);
        Quaternion localRotation = Quaternion.Euler(0f, rotation.y, 0f);
        transform.rotation = transform.rotation * localRotation;

        // RaycastHit hitInfo;
        // if (Input.GetMouseButton(0)) {
        //     if (Physics.Raycast(playerCamera.transform.position, playerCamera.transform.forward, out hitInfo, 100.0f, terrainMask)) {
        //         world.Terraform(hitInfo.point, brushSize, brushWeight);
        //         if ((hitInfo.point - transform.position).magnitude <= brushSize * 2)
        //             terraTest = true;
        //     }
        // }

        // if (Input.GetMouseButton(1)) {
        //     if (Physics.Raycast(playerCamera.transform.position, playerCamera.transform.forward, out hitInfo, 100.0f, terrainMask)) {
        //         world.Terraform(hitInfo.point, brushSize, -brushWeight);
        //         if ((hitInfo.point - transform.position).magnitude <= brushSize * 2)
        //             terraTest = true;
        //     }
        // }

        // if (terraTest) {
        //     terraTest = false;
        //     TerraTest();
        // }
    }

    void TerraTest() {
        float heightOffset = 5f;
		Vector3 a = transform.position - transform.up * (1 + 0.5f - heightOffset);
		Vector3 b = transform.position + transform.up * (1 + 0.5f + heightOffset);
		RaycastHit hitInfo;


		if (Physics.CapsuleCast(a, b, 0.5f, -transform.up, out hitInfo, 20f, terrainMask)) {
			hp = hitInfo.point;
			Vector3 newPos = (hp + transform.up * 1);
			float deltaY = Vector3.Dot(transform.up, (newPos - transform.position));
			if (deltaY > 0.05f)
			{
				transform.position = newPos;
				grounded = true;
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

            Vector3 forwardDir = Vector3.Cross(transform.up, -playerCamera.transform.right).normalized;
            Vector3 rightDir = Vector3.Cross(transform.up, playerCamera.transform.forward).normalized;
            Vector3 targetVelocity = (forwardDir * Input.GetAxis("Vertical") + rightDir * Input.GetAxis("Horizontal")) * speed;

            // Calculate how fast we should be moving

            Vector3 velocity = transform.InverseTransformDirection(r.velocity);
            velocity.y = 0;
            velocity = transform.TransformDirection(velocity);
            Vector3 velocityChange = transform.InverseTransformDirection(targetVelocity - velocity);
            velocityChange.x = Mathf.Clamp(velocityChange.x, -maxVelocityChange, maxVelocityChange);
            velocityChange.z = Mathf.Clamp(velocityChange.z, -maxVelocityChange, maxVelocityChange);
            velocityChange.y = 0;
            velocityChange = transform.TransformDirection(velocityChange);

            r.AddForce(velocityChange, ForceMode.VelocityChange);

            if (Input.GetButton("Jump") && canJump && grounded) {
                r.AddForce(transform.up * jumpHeight, ForceMode.VelocityChange);
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
            if (Input.GetButton("Jump") && canJump && grounded) {
                r.AddForce(transform.up * jumpHeight, ForceMode.VelocityChange);
            }
        }
    }

    void LateUpdate() {
        if (Physics.Raycast(transform.position, -transform.up, 0.5f, terrainMask))
            grounded = true;
        else
            grounded = false;
    }
}

public enum PlayerMode {
    Planet,
    Normal,
    Plane,
    Static
}
