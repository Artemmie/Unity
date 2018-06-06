using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlueTower : MonoBehaviour
{

    private Transform target;

    public float range = 20f;
    public string blueTag = "Blue Mob";

    public Transform rotate;
    void Start()
    {
        InvokeRepeating("UpdateTarget", 0f, 0.5f);
    }

    void Update()
    {
        if (target == null)
            return;

        Vector3 dir = target.position - transform.position;
        Quaternion lookRotation = Quaternion.LookRotation(dir);
        Vector3 rotation = lookRotation.eulerAngles;
        rotate.rotation = Quaternion.Euler(0f, rotation.y, 0f);
    
    }

    void UpdateTarget()
    {
        GameObject[] blueArr = GameObject.FindGameObjectsWithTag(blueTag);
        float shortestDist = Mathf.Infinity;
        GameObject nearestEnemy = null;
        foreach(GameObject enemy in blueArr)
        {
            float distanceToEnemy = Vector3.Distance(transform.position, enemy.transform.position);
            if (distanceToEnemy < shortestDist)
            {
                shortestDist = distanceToEnemy;
                nearestEnemy = enemy;
            }
        }

        if (nearestEnemy != null && shortestDist <= range)
        {
            target = nearestEnemy.transform;
        }
        else
        {
            target = null;
            rotate.rotation = Quaternion.Euler(0f, -90f, 0f);
        }

    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, range);
    }
}
