using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RPG.Movement;
using RPG.Combat;

namespace RPG.Control
{
    public class PlayerController : MonoBehaviour
{
    void Update()
        {
            if(interactWithCombat()) return;
            if (interactWithMovement()) return;
            print ("Nothing to do.");
        }

        private bool interactWithCombat()
        {
            RaycastHit[] hits = Physics.RaycastAll(getMouseRay());
            foreach (RaycastHit hit in hits)
            {
                CombatTarget target = hit.transform.GetComponent<CombatTarget>();
                if (target == null) continue;
                if(Input.GetMouseButtonDown(0))
                {
                    GetComponent<Fighter>().Attack(target);
                }
                return true;
            }
            return false;
        }

        private bool interactWithMovement()
        {
            RaycastHit hit;
            bool hasHit = Physics.Raycast(getMouseRay(), out hit);
            if (hasHit)
            {
                if (Input.GetMouseButton(0)) 
                {
                    GetComponent<Mover>().startMoveAction(hit.point);
                }
                return true;        
                
            }
            return false;
        }

        private static Ray getMouseRay()
        {
            return Camera.main.ScreenPointToRay(Input.mousePosition);
        }
    }
}