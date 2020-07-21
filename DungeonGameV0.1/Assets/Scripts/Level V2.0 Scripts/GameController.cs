using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour
{
    public static GameController instance;
    private static float health = 6;
    private static int maxHealth = 6;
    private static float moveSpeed = 5f;
    private static float fireRate = 0.5f;
    private static float bulletSize = 0.5f;

    public static float Health{ get => health; set => health = value; }
    public static int MaxHealth{ get => maxHealth; set => maxHealth = value; }
    public static float MoveSpeed{ get => moveSpeed; set => moveSpeed = value; }
    public static float FireRate{ get => fireRate; set => fireRate = value; }
    public static float BulletSize{ get => bulletSize; set => bulletSize = value; }

    
    private void Awake() 
    {
        if(instance == null)
        {
            instance = this;
        }
    }
    public static void DamagePlayer(int damage)
    {
        health -= damage;
    }

    public static void HealPlayer(float healAmount)
    {
        health = Mathf.Min(maxHealth, health + healAmount);
    }
    public static void MoveSpeedChange(float speedAmount)
    {
        moveSpeed += speedAmount; 
    }
    public static void FireRateChange(float fireRateAmount)
    {
        fireRate -= fireRateAmount;
    }
    public static void BulletSizeChange(float bulletSizeAmount)
    {
        bulletSize += bulletSizeAmount;
    }
    public static void Restart()
    {
        health = maxHealth;
        SceneManager.LoadScene(0);
        DungeonCrawlController.positionsVisited.Clear();
    }
}
