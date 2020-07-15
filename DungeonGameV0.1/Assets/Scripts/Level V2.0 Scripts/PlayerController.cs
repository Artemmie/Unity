using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [SerializeField] private float speed;
    [SerializeField] private Joystick joystick;
    [SerializeField] public GameObject bulletPrefab;
    [SerializeField] public Transform firePoint;
    [SerializeField] public float bulletSpeed;
    private PlayerAnimation anim;
    private Rigidbody2D rb;
    private Vector2 movement;
    public float lastFire;
    [SerializeField] public float fireDelay;

    private void Start() 
    {
        anim = GetComponent<PlayerAnimation>();
        rb = GetComponent<Rigidbody2D>();
    }

    private void Update() 
    {
        movement.x = joystick.Horizontal;
        movement.y = joystick.Vertical;
        if (Input.GetButton("Fire1") && Time.time > lastFire + fireDelay)
        {
            Shoot();
            lastFire = Time.time;
        }
    }

    private void FixedUpdate()
    {
        anim.Move(movement.x,movement.y,movement.magnitude);
        rb.MovePosition(rb.position + movement * speed * Time.fixedDeltaTime);
    }

    public void Shoot()
    {
        GameObject bullet = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation) as GameObject;
        Rigidbody2D rigb = bullet.GetComponent<Rigidbody2D>();
        rigb.AddForce(firePoint.up * bulletSpeed, ForceMode2D.Impulse);

    }
}
