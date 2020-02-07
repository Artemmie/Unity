using UnityEngine;

namespace RPG.Core
{
    public class Health : MonoBehaviour 
    {
        [SerializeField] float health = 100f;

        bool isDead = false;
        public bool IsDead()
        {
            return isDead;
        }
        public void takeDamage(float damage)
        {
            health = Mathf.Max(health - damage, 0);  
            if (health == 0f) Death();
        }
        private void Death()
        {
            if (isDead) return;
            isDead = true;
            GetComponent<Animator>().SetTrigger("die");
            GetComponent<ActionScheduler>().CancelCurrenAction();
        }
    }
}