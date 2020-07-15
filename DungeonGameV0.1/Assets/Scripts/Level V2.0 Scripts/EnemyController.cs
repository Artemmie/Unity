using System;
using System.Collections;
using UnityEngine;

public enum EnemyState
{
    Wander,
    Follow,
    Die,
    Attack
};

public class EnemyController : MonoBehaviour
{
    GameObject player;
    public EnemyState currState = EnemyState.Wander;
    public float range;
    public float speed;
    public float attackRange;
    public float coolDown;
    private bool chooseDir = false;
    private bool dead = false;
    private bool coolDownAttack = false;
    private Vector3 randomDir;
    public int health = 100;
    private void Start() 
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }
    private void Update() 
    {
        switch(currState)
        {
            case(EnemyState.Wander):
                Wander();
            break;
            case(EnemyState.Follow):
                Follow();
            break;
            case(EnemyState.Die):
                Die();
            break;
            case(EnemyState.Attack):
               Attack();
            break;
        }
        if (health <= 0)
        {
            currState = EnemyState.Die;
        }
        else if(IsPlayerInRange(range) && currState != EnemyState.Die)
        {
            currState = EnemyState.Follow;
        }
        else if(!IsPlayerInRange(range) && currState != EnemyState.Die)
        {
            currState = EnemyState.Wander;
        }
        if(Vector3.Distance(transform.position, player.transform.position) <= attackRange)
        {
            currState = EnemyState.Attack;
        }

    }

    private bool IsPlayerInRange(float range) 
    {
        return Vector3.Distance(transform.position, player.transform.position) <= range;
    }
    private IEnumerator chooseDirection()
    {
        chooseDir = true;
        yield return new WaitForSeconds(UnityEngine.Random.Range(2f, 8f));
        randomDir = new Vector3(0, 0, UnityEngine.Random.Range(0, 360));
        Quaternion nextRotation = Quaternion.Euler(randomDir);
        transform.rotation = Quaternion.Lerp(transform.rotation, nextRotation, UnityEngine.Random.Range(0.5f, 2.5f));
        chooseDir = false;
    }

    private void Wander()
    {
        if(!chooseDir)
        {
            StartCoroutine(chooseDirection());
        }
        transform.position += -transform.right * speed * Time.deltaTime;
        if (IsPlayerInRange(range))
        {
            currState = EnemyState.Follow;
        }
    }
    private void Follow()
    {
        transform.position = Vector2.MoveTowards(transform.position, player.transform.position, speed * Time.deltaTime);
    }
    public void ReduceHP()
    {
        health -= 1;
    }

    public void Die()
    {
        Destroy(gameObject);
    }
    public void Attack()
    {
        if (!coolDownAttack)
        {
            GameController.DamagePlayer(1);
            StartCoroutine(CoolDown());
        }
        
    }
    private IEnumerator CoolDown()
    {
        coolDownAttack = true;
        yield return new WaitForSeconds(coolDown);
        coolDownAttack = false;
    }
    private GunController gunController;
    void OnTriggerStay2D(Collider2D other)
    {
        gunController = GameObject.FindObjectOfType<GunController>();
        if (other.tag == "Gun")
        {
            gunController.FindClosestEnemy();
        }
    }
}
