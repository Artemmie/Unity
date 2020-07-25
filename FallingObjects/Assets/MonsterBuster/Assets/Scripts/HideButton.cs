using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideButton : MonoBehaviour {

    public Animator anim;
    public bool state;

    void Start () {
        anim = GetComponent<Animator>();
       if(gameObject.name.Contains("Left"))
        Invoke("Delay",0.1f);
       else
            Invoke("Delay", 0.6f);

    }

    void Delay()
    {
        anim.SetBool("state", true);
    }

    public void HideBtnClick()
    { 
        state = anim.GetBool("state");
        anim.SetBool("state", !state);
    }

    
}
