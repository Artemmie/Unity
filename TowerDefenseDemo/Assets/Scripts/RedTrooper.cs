using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RedTrooper : MonoBehaviour {

    public float speed = 10f;
    public bool isDead = false;
    public int health = 1;
    public int armor = 0;

    private int maxHealth = 250;
    private Transform target;
    private Vector3 dir;
    private int wavepointInd = 0;
    private bool arrived = false;



    public RedTrooper(bool isDead, int health, int armor, Vector3 dir)
    {
        isDead = this.isDead;
        health = this.health;
        armor = this.armor;
        dir = this.dir;
    }

    void Start()
    {
        PosAndDir();
    }

    void Update()
    {
        if (!arrived) WaypointDir();
        if (isDead)
        {
            Destroy(gameObject);
        }

    }

    private void PosAndDir()
    {
        transform.position = GameObject.Find("Spawn Point Red").transform.position;
        target = Waypoints.pointsRed[0];
    }

    private void WaypointDir()
    {
        dir = target.position - transform.position;
        transform.Translate(dir.normalized * speed * Time.deltaTime, Space.World);
        if (Vector3.Distance(transform.position, target.position) <= 0.5f) GetNextWayPoint();
    }

    private void GetNextWayPoint()
    {
        if (wavepointInd >= Waypoints.pointsRed.Length - 1)
        {
            arrived = true;
            isDead = true;
            return;
        }
        wavepointInd++;
        target = Waypoints.pointsRed[wavepointInd];
    }
}

