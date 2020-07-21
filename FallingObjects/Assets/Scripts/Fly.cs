using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fly : MonoBehaviour
{
    public ManagerGame gameManager;
    public float velocity = 1;
    private float rotation = 1;
    private Rigidbody2D rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.touchCount > 0)
      //  if(Input.GetMouseButtonDown(0))
        {
            //Jump;
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
