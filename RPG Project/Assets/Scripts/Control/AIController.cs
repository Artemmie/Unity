using System.Collections;
using System.Collections.Generic;
using UnityEngine.AI;
using UnityEngine;
using RPG.Combat;
using RPG.Core;
using RPG.Movement;
using System;

namespace RPG.Control
{
    public class AIController : MonoBehaviour
    {
        [SerializeField] float chaseDistance = 5f;
        [SerializeField] float suspicionTime = 3f;
        [SerializeField] float waypointDwellTime = 3f;
        [SerializeField] float waypointTolerance = 1f;
        [SerializeField] PatrolPath patrolPath;
        Fighter fighter;
        Health health;
        Mover mover;
        GameObject player;
        Vector3 guardPosition;
        float timeSinceLastSawPlayer = Mathf.Infinity;
        float timeSinceArrivedAtWaypoint = Mathf.Infinity;
        int currentWayPointIndex = 0;
        float patrolSpeed = 1.66f;
        float chaseSpeed = 5.00f;
        UnityEngine.AI.NavMeshAgent navMeshAgent;

        private void Start() 
        {
            fighter = GetComponent<Fighter>();
            health = GetComponent<Health>();
            mover = GetComponent<Mover>();
            navMeshAgent = GetComponent<NavMeshAgent>();
            player = GameObject.FindWithTag("Player");
            guardPosition = transform.position;
        }
        private void Update()
        {
            GameObject player = GameObject.FindWithTag("Player");
            if (inRangeToAttack() && fighter.canAttack(player) && !health.IsDead()) attackBehavior(player);
            else if (timeSinceLastSawPlayer <= suspicionTime) suspicionBehavior();
            else patrolBehavior();
            updateTimers();
        }

        private void updateTimers()
        {
            timeSinceLastSawPlayer += Time.deltaTime;
            timeSinceArrivedAtWaypoint += Time.deltaTime;
        }
        private void suspicionBehavior()
        {
            GetComponent<ActionScheduler>().CancelCurrenAction();
        }

        private void attackBehavior(GameObject player)
        {
            timeSinceLastSawPlayer = 0;
            navMeshAgent.speed = chaseSpeed;
            fighter.Attack(player);
        }

        private void patrolBehavior()
        {
            navMeshAgent.speed = patrolSpeed;
            Vector3 nextPosition = guardPosition;
            if (patrolPath != null)
            {
                if (atWaypoint()) cycleWayPoint();
                nextPosition = getCurrentWaypoint();
            }
            if (timeSinceArrivedAtWaypoint > waypointDwellTime) mover.startMoveAction(nextPosition);
        }

        private Vector3 getCurrentWaypoint()
        {
           return patrolPath.getPosition(currentWayPointIndex);
        }

        private void cycleWayPoint()
        {
            timeSinceArrivedAtWaypoint = 0f;
            currentWayPointIndex = patrolPath.getNextIndex(currentWayPointIndex);
        }

        private bool atWaypoint()
        {
            float distanceToWayPoint = Vector3.Distance(transform.position, getCurrentWaypoint());
            return distanceToWayPoint < waypointTolerance;
        }

        private bool inRangeToAttack()
        {
            float distanceToPlayer = Vector3.Distance(transform.position, player.transform.position);
            return distanceToPlayer < chaseDistance;
        }
        private void OnDrawGizmos() //Called by Unity 
        {
            Gizmos.color = Color.blue;
            Gizmos.DrawWireSphere(transform.position,chaseDistance);
        } 
    }
}
