using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField] Rigidbody2D rb;
    [SerializeField] LayerMask groundLayer;
  //  [SerializeField] PlayerAnimation pA;

    [SerializeField] float jump = 5.0f;
    [SerializeField] float speed = 3.0f;
    private float move;
    private PlayerAnimation playerAnim;
    private SpriteRenderer spriteRen;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        playerAnim = GetComponent<PlayerAnimation>();
        spriteRen = GetComponentInChildren<SpriteRenderer>();
        
       // pA = GetComponent<PlayerAnimation>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        Movement();
        Flip();
        Jump();
        Animations();
    }

    void Movement(){
        move = Input.GetAxisRaw("Horizontal");
        rb.velocity = new Vector2(move * speed, rb.velocity.y);
    }

    void Flip()
    {
        if (move > 0) spriteRen.flipX = false;
        else if (move < 0) spriteRen.flipX = true;
    }

    void Jump()
    {
        if (Input.GetKey("space") && Raycast())
            rb.velocity = new Vector2(move * speed, jump);
    }

    private bool Raycast()
    {
        RaycastHit2D hit = Physics2D.Raycast(transform.position, Vector2.down, 0.8f, groundLayer.value);
        if (hit.collider != null)
            return true;
        return false;
    }
    void Animations()
    {
        playerAnim.Move(move);
    }
}
