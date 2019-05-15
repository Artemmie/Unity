using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField] Rigidbody2D rb;
    [SerializeField] LayerMask groundLayer;
    [SerializeField] PlayerAnimation pA;

    [SerializeField] float jump = 5.0f;
    [SerializeField] float move;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        pA = GetComponent<PlayerAnimation>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        Movement();
        Jump();
    }

    void Movement(){
        move = Input.GetAxisRaw("Horizontal");
        rb.velocity = new Vector2(move, rb.velocity.y);
    }

    void Jump()
    {
        Debug.Log("Jumping");
        if (Input.GetKeyDown("space") && Raycast())
            rb.velocity = new Vector2(move * speed, jump);
    }

    private bool Raycast()
    {
        RaycastHit2D hit = Physics2D.Raycast(transform.position, Vector2.down, 0.6f, groundLayer.value);
        Debug.DrawLine(transform.position, Vector2.down, Color.red, 30f);
        if (hit.collider != null)
            return true;
        return false;
    }
}
