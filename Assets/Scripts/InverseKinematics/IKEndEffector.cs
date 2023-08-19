using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IKEndEffector : MonoBehaviour {
    public Transform target;
    
    public List<IKLimb> limbs = new List<IKLimb>();
    IKRoot root;

    void Reset() {
        List<GameObject> limbObjects = new List<GameObject>();
        IKLimb prevLimb = null;
        IKLimb limb = null;
        Transform currentLimb = transform;
        while (true) {
            limbObjects.Add(currentLimb.gameObject);

            prevLimb = limb;
            if (currentLimb.gameObject.GetComponent<IKLimb>() == null)
                limb = (IKLimb) currentLimb.gameObject.AddComponent<IKLimb>();
            else 
                limb = currentLimb.gameObject.GetComponent<IKLimb>();

            if (prevLimb != null) {
                prevLimb.prev = limb;
                prevLimb.distance = (limb.transform.position - prevLimb.transform.position).magnitude;
            }

            limbs.Add(limb);

            if (currentLimb.parent == null) {
                Debug.LogError("Root Object Not Found");
                break;
            } else {
                if (currentLimb.parent.gameObject.GetComponent<IKRoot>() != null) {
                    root = currentLimb.parent.gameObject.GetComponent<IKRoot>();
                    break;  
                } else {
                    currentLimb = currentLimb.parent;
                }
            }
        }

        if (!root.endEffectors.Contains(this))
            root.endEffectors.Add(this);
    }

    void SolveEffector() {

    }
}