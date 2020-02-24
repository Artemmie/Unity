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
        Health target;
        float timeSinceLastAttack = Mathf.Infinity;
        private void Update()
        {
            timeSinceLastAttack += Time.deltaTime;
            if (target == null) return;
            if (target.IsDead()) return;
            if (!getIsInRange()) GetComponent<Mover>().moveTo(target.transform.position, 1f);
            else
            {
                GetComponent<Mover>().Cancel();
                attackBehaviour();
            }
        }
        private void attackBehaviour()
        {
            transform.LookAt(target.transform);
            if (timeSinceLastAttack > timeBetweenAttacks)
            {
                //This will trigger the hit() event
                triggerAttack();
                timeSinceLastAttack = 0f;
            }
        }
        private void triggerAttack()
        {
            GetComponent<Animator>().ResetTrigger("stopAttack");
            GetComponent<Animator>().SetTrigger("Attack");
        }
        //Animation Event
        void Hit()
        {
            if (target == null) return;
            target.takeDamage(weaponDamage);
        }
        private bool getIsInRange()
        {
            return Vector3.Distance(transform.position, target.transform.position) <= weaponRange;
        }
        public void Attack(GameObject combatTarget)
        {
            GetComponent<ActionScheduler>().StartAction(this);
            target = combatTarget.GetComponent<Health>();
        }
        public bool canAttack(GameObject combatTarget)
        {
            Health targetToTest = combatTarget.GetComponent<Health>();
            return targetToTest != null && !targetToTest.IsDead();
        }
        public void Cancel()
        {
            target = null;
            stopAttack();
        }

        private void stopAttack()
        {
            GetComponent<Animator>().ResetTrigger("Attack");
            GetComponent<Animator>().SetTrigger("stopAttack");
        }
    }
}
