using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    [SerializeField] private float speed;
    [SerializeField] private Joystick joystick;
    private PlayerAnimation anim;
    private Rigidbody2D rb;
    private Vector2 movement;

    private void Start() 
    {
        anim = GetComponent<PlayerAnimation>();
        rb = GetComponent<Rigidbody2D>();
    }

    private void Update() 
    {
        movement.x = joystick.Horizontal;
        movement.y = joystick.Vertical;
    }
    private void FixedUpdate()
    {
        anim.Move(movement.x,movement.y,movement.magnitude);
        rb.MovePosition(rb.position + movement * speed * Time.fixedDeltaTime);
    }
}
