using UnityEngine;
using RPG.Core;
using RPG.Movement;
namespace RPG.Combat
{
    public class Fighter : MonoBehaviour, IAction
    {
        [SerializeField] float weaponRange = 2f;
        [SerializeField] float timeBetweenAttacks = 1f;
        [SerializeField] float weaponDamage = 5f;
        Transform target;
        float timeSinceLastAttack = 0;
        private void Update()
        {
            timeSinceLastAttack += Time.deltaTime;
            if (target == null) return;
            if (!getIsInRange())
            {
                GetComponent<Mover>().moveTo(target.position);
            }
            else
            {
                GetComponent<Mover>().Cancel();
                attackBehaviour();
            }
        }
        private void attackBehaviour()
        {
            if (timeSinceLastAttack > timeBetweenAttacks)
            {
                //This will trigger the hit() event
                GetComponent<Animator>().SetTrigger("Attack");
                timeSinceLastAttack = 0f;

            }
            
        }
        //Animation Event
        void Hit()
        {
            Health healthComponent = target.GetComponent<Health>();
            healthComponent.takeDamage(weaponDamage);
        }
        private bool getIsInRange()
        {
            return Vector3.Distance(transform.position, target.position) <= weaponRange;
        }
        public void Attack(CombatTarget combatTarget)
        {
            GetComponent<ActionScheduler>().StartAction(this);
            target = combatTarget.transform;
        }
        public void Cancel()
        {
            target = null;
        }
    }
}
