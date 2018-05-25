using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rocket : MonoBehaviour
{
    Rigidbody rigidBody;
    AudioSource audioSource;

    [SerializeField] float rcsThrust = 100f;
    [SerializeField] float mainThrust = 100f;

    // Use this for initialization
    void Start () {
        rigidBody = GetComponent<Rigidbody>();
        audioSource = GetComponent<AudioSource>();
		
	}
	
	// Update is called once per frame
	void Update () {
        Rotate();
        Thrust();
		
	}

    private void Rotate()
    {
        float rotationSpeed = rcsThrust * Time.deltaTime;
        rigidBody.freezeRotation = true;
        if (Input.GetKey(KeyCode.A))
            transform.Rotate(Vector3.forward * rotationSpeed);
        else if (Input.GetKey(KeyCode.D))
            transform.Rotate(-Vector3.forward * rotationSpeed);
        rigidBody.freezeRotation = false;
    }

    private void Thrust()
    {
        if (Input.GetKey(KeyCode.Space))
        {
            rigidBody.AddRelativeForce(Vector3.up * mainThrust);
            if (!audioSource.isPlaying)
                audioSource.Play();
        }
        else audioSource.Stop();
    }
}
