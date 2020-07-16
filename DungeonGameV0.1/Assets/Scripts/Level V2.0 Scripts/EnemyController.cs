using System;
using System.Collections;
using UnityEngine;

public enum EnemyState
{
    Idle,
    Wander,
    Follow,
    Die,
    Attack
};
public enum EnemyType
{
    Melee,
    Range,
};

public class EnemyController : MonoBehaviour
{
    GameObject player;
    public EnemyState currState = EnemyState.Idle;
    public EnemyType enemyType;
    public float range;
    public float speed;
    public float attackRange;
    public float coolDown;
    public bool inRoom = false;
    private bool chooseDir = false;
    private bool dead = false;
    private bool coolDownAttack = false;
    private Vector3 randomDir;
    public int health = 100;
    public GameObject bulletPrefab;
    private void Start() 
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }
    private void Update() 
    {
        if (health <= 0) currState = EnemyState.Die;
        switch(currState)
        {
   //         case(EnemyState.Idle):
     //           Idle();
       //     break;
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
        if (inRoom)
        {
            if (IsPlayerInRange(range) && currState != EnemyState.Die)
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
        else
        {
            currState = EnemyState.Idle;
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
        RoomController.instance.StartCoroutine(RoomController.instance.RoomCoroutine());
        Destroy(gameObject);
    }
    public void Attack()
    {
        if (!coolDownAttack)
        {
            switch(enemyType)
            {
                case(EnemyType.Melee):
                    GameController.DamagePlayer(1);
                    StartCoroutine(CoolDown());
                break;
                case(EnemyType.Range):
                    GameObject bullet = Instantiate(bulletPrefab, transform.position, Quaternion.identity) as GameObject;
                    bullet.GetComponent<BulletController>().GetPlayer(player.transform);
                    bullet.GetComponent<BulletController>().isEnemyBullet = true;
                    StartCoroutine(CoolDown());
                break;
            }
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
