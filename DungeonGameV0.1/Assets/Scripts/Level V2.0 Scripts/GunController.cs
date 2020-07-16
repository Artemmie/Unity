using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunController : MonoBehaviour
{
    private EnemyController closestEnemy;
    private PlayerController playerController;
    public void RotateGun(Vector3 enemyPos)
    {
        Vector2 lookDir = enemyPos - transform.position;
        float angle = Mathf.Atan2(lookDir.y, lookDir.x) * Mathf.Rad2Deg - 90f;
        Quaternion rotation = Quaternion.AngleAxis(angle - 270, Vector3.forward);
        transform.rotation = rotation;
        playerController = GameObject.FindObjectOfType<PlayerController>();
        if (Time.time > playerController.lastFire + playerController.fireDelay)
        {
            playerController.Shoot();
            playerController.lastFire = Time.time;
         }
    }
    public void FindClosestEnemy()
    {
        float distanceToClosestEnemy = Mathf.Infinity;
        closestEnemy = null;
        EnemyController[] allEnemies = GameObject.FindObjectsOfType<EnemyController>();
        foreach (EnemyController currEnemy in allEnemies)
        {
            float distanceToEnemy = (currEnemy.transform.position - this.transform.position).sqrMagnitude;
            if (distanceToEnemy < distanceToClosestEnemy)
            {
                distanceToClosestEnemy = distanceToEnemy;
                closestEnemy = currEnemy;
            }
        }
        RotateGun(closestEnemy.transform.position);
        Debug.DrawLine(this.transform.position, closestEnemy.transform.position);
    }
}
