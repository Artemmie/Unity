using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace RPG.Control
{
    public class PatrolPath : MonoBehaviour
    {
        const float waypointGizmoRadius = 0.3f;
        private void OnDrawGizmos() 
        {
            for (int i = 0; i < transform.childCount; i++)
            {
                int j = getNextIndex(i);
                Gizmos.DrawSphere(getPosition(i), waypointGizmoRadius);
                Gizmos.DrawLine(getPosition(i), getPosition(j));
                
            }
        }

        public int getNextIndex(int i)
        {
            if (i + 1 == transform.childCount)
            {
                return 0;
            }
            return i + 1;
        }

        public Vector3 getPosition(int i)
        {
            return transform.GetChild(i).position;
        }
    }
}
