using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootRocket : MonoBehaviour
{
    public float speed;
    private float time = 0;
    private float maxTime = 15;
    void Update()
    {
        transform.position += transform.right * speed * Time.deltaTime;
        if (time > maxTime)
        {
            time = 0;
            Destroy(gameObject);
        }
        time += Time.deltaTime;
    }

    private void OnCollisionEnter2D(Collision2D other) 
    {
        if (other.gameObject.tag == "Enemy")
        {
            Destroy(gameObject);
            Destroy(other.gameObject);
        }
    }
}
