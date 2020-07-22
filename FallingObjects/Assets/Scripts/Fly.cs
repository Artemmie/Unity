using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fly : MonoBehaviour
{
    public ManagerGame gameManager;
    public float velocity = 1;
    private float rotation = 1;
    private Rigidbody2D rb;
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
            transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(0,0, -20), Time.deltaTime * rotation);
        }
    }
    private void OnCollisionEnter2D(Collision2D other) 
    {
        gameManager.GameOver();
    }
}
