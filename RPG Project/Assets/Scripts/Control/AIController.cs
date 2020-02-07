using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RPG.Combat;
using RPG.Core;
namespace RPG.Control
{
    public class AIController : MonoBehaviour
    {
        [SerializeField] float chaseDistance = 5f;
        Fighter fighter;
        Health health;
        GameObject player;

        private void Start() 
        {
            fighter = GetComponent<Fighter>();
            health = GetComponent<Health>();
            player = GameObject.FindWithTag("Player");
        }
        private void Update() 
        {
            GameObject player = GameObject.FindWithTag("Player");
            if (inRangeToAttack() && fighter.canAttack(player) && !health.IsDead()) fighter.Attack(player);
            else fighter.Cancel();
            
        }
        private bool inRangeToAttack()
        {
            float distanceToPlayer = Vector3.Distance(transform.position, player.transform.position);
            return distanceToPlayer < chaseDistance;
        }
    }
}
