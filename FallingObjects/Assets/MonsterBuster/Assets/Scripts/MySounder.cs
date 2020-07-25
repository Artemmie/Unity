using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(AudioSource))]
public class MySounder : MonoBehaviour
{

    public static MySounder instance = null;
    [Space]
    [Header("Sounds ...")]
    public AudioClip hoverSound;
    public AudioClip clickSound;

    AudioSource audi;

    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(this.transform);
    }
    private void Start()
    {
        
        audi = GetComponent<AudioSource>();
    }

    public void Hover()
    {
       
        audi.clip = hoverSound;
        audi.Play();

    }
    public void Click()
    {
        audi.clip = clickSound;
        audi.Play();
      

    }


}
