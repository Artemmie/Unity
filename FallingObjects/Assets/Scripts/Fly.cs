using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fly : MonoBehaviour
{
    public ManagerGame gameManager;
    public Transform shootPoint;
    public GameObject rocketPrefab;
    public float delayTime = 1;
    public float velocity = 1;
    private float rotation = 1;
    private Rigidbody2D rb;
    private float delay = 0;
    public float rocketSpeed = 1;
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }
    void Update()
    {
        if(Input.touchCount > 0)
        {
            rb.velocity = Vector2.up * velocity;
            if (transform.rotation.z <= 20)
            {
                transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(0,0, 20), Time.deltaTime * rotation);
            } 
        }
        else if (transform.rotation.z >= -20)
        {
            transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(0,0, -20), Time.deltaTime * (rotation / 2));
        }
        delay += Time.deltaTime;
    }
    public void Shoot()
    {
        if (Rocket.rocket > 0 && delay > delayTime)
        {
            Rocket.rocket--;
            GameObject rocket = Instantiate(rocketPrefab, shootPoint.transform.position, transform.rotation) as GameObject;
            Destroy(rocket, 7);
            delay = 0;
        }
    }
    private void OnCollisionEnter2D(Collision2D other) 
    {
        if (other.gameObject.tag != "Rocket")
        {
            gameManager.GameOver();
        }
    }
}
