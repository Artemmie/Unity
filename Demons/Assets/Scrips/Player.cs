using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField] Rigidbody2D rb;
    [SerializeField] LayerMask groundLayer;

    [SerializeField] float jump = 5.0f;
    [SerializeField] float move, speed = 3.0f;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        Movement();
        Jump();
    }

    void Movement(){
        move = Input.GetAxisRaw("Horizontal");
        rb.velocity = new Vector2(move * speed, rb.velocity.y);
    }

    void Jump()
    {
        if (Input.GetKeyDown("space") && Raycast())
            rb.velocity = new Vector2(move, jump);
    }

    private bool Raycast()
    {
        RaycastHit2D hit = Physics2D.Raycast(transform.position, Vector2.down, 0.6f, groundLayer.value);
        if (hit.collider != null)
            return true;
        return false;
    }
}
