using System.Security.Cryptography.X509Certificates;
using System.Collections.Generic;
using System.Collections;
using UnityEngine;

public class IKRoot : MonoBehaviour {
    public List<IKEndEffector> endEffectors;

    void OnDrawGizmos() {
        foreach (IKEndEffector endEffector in endEffectors) {
            foreach (IKLimb limb in endEffector.limbs) {
                if (limb.prev != null)
                    Gizmos.DrawLine(limb.transform.position, limb.prev.transform.position);
            }
        }
    }
}