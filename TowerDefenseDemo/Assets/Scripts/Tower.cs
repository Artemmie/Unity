using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tower : MonoBehaviour {


    public Transform target;
    public float range = 200f;
    public string blueTag = "Blue Mob";
    public string redTag = "Red Mob";
	void Start () {
        InvokeRepeating("UpdateRaget", 0f, 0.5f);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    
    void UpdateTarget()
    {
        GameObject[] blueArr = GameObject.FindGameObjectsWithTag(blueTag);
        GameObject[] redArr = GameObject.FindGameObjectsWithTag(redTag);

    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, range);
    }
}
