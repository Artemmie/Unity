using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletController : MonoBehaviour
{
    [SerializeField] float lifeTime;
    public bool isEnemyBullet = false;
    private Vector2 lastPos;
    private Vector2 currPos;
    private Vector2 playerPos;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(DeathDelay());
        if (!isEnemyBullet)
        {
            transform.localScale = new Vector2(GameController.BulletSize, GameController.BulletSize);
        }
        
    }
    private void Update() 
    {
        if (isEnemyBullet)
        {
            currPos = transform.position;
            transform.position = Vector2.MoveTowards(transform.position, playerPos, 5f * Time.deltaTime);
            if (currPos == lastPos)
            {
                Destroy(gameObject);
            }
            lastPos = currPos;
        }
    }
    public void GetPlayer(Transform player)
    {
        playerPos = player.position;
    }

    IEnumerator DeathDelay()
    {
        yield return new WaitForSeconds(lifeTime);
        Destroy(gameObject);
    }
    private void OnTriggerEnter2D(Collider2D col) 
    {
        if (col.tag == "Enemy" && !isEnemyBullet)
        {
            col.gameObject.GetComponent<EnemyController>().ReduceHP();
            Destroy(gameObject);
        }
        if (col.tag == "Player" && isEnemyBullet)
        {
            GameController.DamagePlayer(2);
            Destroy(gameObject);
        }
    }
    private void OnTriggerExit2D(Collider2D other) 
    {
        if (other.tag == "Wall")
        {
            Destroy(gameObject);
        }
    }
}
