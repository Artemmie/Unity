using UnityEngine;
using RPG.Combat;
using RPG.Core;
using RPG.Movement;

namespace RPG.Control
{
    public class AIController : MonoBehaviour
    {
        [SerializeField] float chaseDistance = 5f;
        [SerializeField] float suspicionTime = 3f;
        [SerializeField] float waypointDwellTime = 3f;
        [SerializeField] float waypointTolerance = 1f;
        [SerializeField] PatrolPath patrolPath;
        [Range(0,1)]
        [SerializeField] float patrolSpeed = 0.2f;
        Fighter fighter;
        Health health;
        Mover mover;
        GameObject player;
        Vector3 guardPosition;
        float timeSinceLastSawPlayer = Mathf.Infinity;
        float timeSinceArrivedAtWaypoint = Mathf.Infinity;
        int currentWayPointIndex = 0;

        private void Start() 
        {
            fighter = GetComponent<Fighter>();
            health = GetComponent<Health>();
            mover = GetComponent<Mover>();
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
            fighter.Attack(player);
        }

        private void patrolBehavior()
        {
            Vector3 nextPosition = guardPosition;
            if (patrolPath != null)
            {
                if (atWaypoint()) cycleWayPoint();
                nextPosition = getCurrentWaypoint();
            }
            if (timeSinceArrivedAtWaypoint > waypointDwellTime) mover.startMoveAction(nextPosition, patrolSpeed);
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
