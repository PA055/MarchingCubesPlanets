using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimator : MonoBehaviour
{

    [SerializeField] Transform lookTarget;
    
    [Header("Head")]
    [SerializeField] Transform headBone;
    [SerializeField] float headTrackingSpeed;
    [SerializeField] float headMaxTurnAngle;

    [Header("Eyes")]
    [SerializeField] Transform leftEyeBone;
    [SerializeField] Transform rightEyeBone;

    [SerializeField] float eyeTrackingSpeed;

    [SerializeField] float leftEyeMaxYRotation;
    [SerializeField] float leftEyeMinYRotation;

    [SerializeField] float rightEyeMaxYRotation;
    [SerializeField] float rightEyeMinYRotation;

    void LateUpdate() {
        UpdateHead();
        UpdateEyes();
    }

    void UpdateHead() {
        Quaternion currentLocalRotation = headBone.localRotation;
        headBone.localRotation = Quaternion.identity;

        Vector3 targetWorldLookDir = lookTarget.position - headBone.position;
        Vector3 targetLocalLookDir = headBone.InverseTransformDirection(targetWorldLookDir);

        // Apply angle limit
        targetLocalLookDir = Vector3.RotateTowards(
            Vector3.forward,
            targetLocalLookDir,
            Mathf.Deg2Rad * headMaxTurnAngle,
            0
        );

        // Get the local rotation by using LookRotation on a local directional vector
        Quaternion targetLocalRotation = Quaternion.LookRotation(targetLocalLookDir, Vector3.up);

        // Apply smoothing
        headBone.localRotation = Quaternion.Slerp(
            currentLocalRotation,
            targetLocalRotation, 
            1 - Mathf.Exp(-headTrackingSpeed * Time.deltaTime)
        );
    }

    void UpdateEyes() {
        Quaternion targetEyeRotation = Quaternion.LookRotation(lookTarget.position - headBone.position, transform.up);

        leftEyeBone.rotation = Quaternion.Slerp(
            leftEyeBone.rotation,
            targetEyeRotation,
            1 - Mathf.Exp(-eyeTrackingSpeed * Time.deltaTime)
        );

        rightEyeBone.rotation = Quaternion.Slerp(
            rightEyeBone.rotation,
            targetEyeRotation,
            1 - Mathf.Exp(-eyeTrackingSpeed * Time.deltaTime)
        );

        float leftEyeCurrentYRotation = leftEyeBone.localEulerAngles.y;
        float rightEyeCurrentYRotation = rightEyeBone.localEulerAngles.y;

        if (leftEyeCurrentYRotation > 180)
            leftEyeCurrentYRotation -= 360;

        if (rightEyeCurrentYRotation > 180) 
            rightEyeCurrentYRotation -= 360;
        
        float leftEyeClampedYRotation = Mathf.Clamp(leftEyeCurrentYRotation, leftEyeMinYRotation, leftEyeMaxYRotation);
        float rightEyeClampedYRotation = Mathf.Clamp(rightEyeCurrentYRotation, rightEyeMinYRotation, rightEyeMaxYRotation);

        leftEyeBone.localEulerAngles = new Vector3(
            leftEyeBone.localEulerAngles.x,
            leftEyeClampedYRotation,
            leftEyeBone.localEulerAngles.z
        );
        rightEyeBone.localEulerAngles = new Vector3(
            rightEyeBone.localEulerAngles.x,
            rightEyeClampedYRotation,
            rightEyeBone.localEulerAngles.z
        );
    }
}