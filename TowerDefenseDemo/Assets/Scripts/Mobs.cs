using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mobs : MonoBehaviour {

    public float speed = 10f;


    private int health = 1;
    private Transform target;
    private int wavepointInd = 0;
    private bool teleported = false;


	void Start ()
    {
        PosAndDir();
    }

    void Update ()
    {
        if (!teleported) WaypointDir();
    }

    private void PosAndDir()
    {
        if (CompareTag("Blue Mob"))
        {
            transform.position = GameObject.Find("Spawn Point Blue").transform.position;
            target = Waypoints.pointsBlue[0];
        }
        if (CompareTag("Red Mob"))
        {
            transform.position = GameObject.Find("Spawn Point Red").transform.position;
            target = Waypoints.pointsRed[0];
        }
    }

    private void WaypointDir()
    {
        Vector3 dir = target.position - transform.position;
        transform.Translate(dir.normalized * speed * Time.deltaTime, Space.World);
        if (Vector3.Distance(transform.position, target.position) <= 0.5f) GetNextWayPoint();
    }

    private void GetNextWayPoint()
    {
        if (CompareTag("Blue Mob"))
        {
            print("child number:" + Waypoints.pointsRed.Length);
            print("wavepoint number:" + wavepointInd);
            if (wavepointInd >= Waypoints.pointsBlue.Length - 1)
            {
                transform.position = GameObject.Find("Teleport End Point Blue").transform.position;
                teleported = true;
                return;
            }
            wavepointInd++;
            target = Waypoints.pointsBlue[wavepointInd];
        }
        if (CompareTag("Red Mob"))
        {
            if (wavepointInd >= Waypoints.pointsRed.Length - 1)
            { 
                transform.position = GameObject.Find("Teleport End Point Red").transform.position;
                teleported = true;
                return;
            }
            wavepointInd++;
            target = Waypoints.pointsRed[wavepointInd];
        }
    }
}
