using System;
using UnityEngine;
using UnityEngine.UI;


public class PlayerController : MonoBehaviour
{
    [SerializeField] private float speed;
    [SerializeField] private Joystick joystick;
    [SerializeField] GameObject bulletPrefab;
    [SerializeField] Transform firePoint;
    [SerializeField] float bulletSpeed;
     public float fireDelay;
    public float lastFire;
    public static int collectedAmount;
    private PlayerAnimation anim;
    private Rigidbody2D rb;
    private Vector2 movement;
    private float health;
    
    private void Start() 
    {
        anim = GetComponent<PlayerAnimation>();
        rb = GetComponent<Rigidbody2D>();
    }

    private void Update() 
    {
        movement.x = joystick.Horizontal;
        movement.y = joystick.Vertical;
        fireDelay = GameController.FireRate;
        speed = GameController.MoveSpeed;
        health = GameController.Health;
        if (health <= 0) 
        {
            GameController.Restart();    
        }
        
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
