using UnityEngine;

public class Mob : MonoBehaviour {

    public float speed = 10f;
    public bool isDead = false;
    public int health = 1;
    public int armor = 0;

    private int maxHealth = 250;
    private Transform target;
    private int wavepointInd = 0;
    private bool arrived = false;




	void Start ()
    {
        PosAndDir();
    }

    void Update ()
    {
        if (!arrived) WaypointDir();
        if (isDead)
        {
         //   Destroy(gameObject); 
        }

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
        Debug.Log(target.position - transform.position);
        Vector3 dir = target.position - transform.position;
        Debug.Log("dir: " + dir);
        transform.Translate(dir.normalized * speed * Time.deltaTime, Space.World);
        if (Vector3.Distance(transform.position, target.position) <= 0.5f) GetNextWayPoint();
    }

    private void GetNextWayPoint()
    {
        if (CompareTag("Blue Mob"))
        {
            if (wavepointInd >= Waypoints.pointsBlue.Length - 1)
            {
                arrived = true;
                isDead = true;
                return;
            }
            wavepointInd++;
            target = Waypoints.pointsBlue[wavepointInd];
        }
        if (CompareTag("Red Mob"))
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
}
