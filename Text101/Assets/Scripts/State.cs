using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "State")]
public class State : ScriptableObject
{
   [TextArea(9,12)] [SerializeField] string storyText;
   [SerializeField] State[] nextStates;

    public string getStateStory()
    {
        return storyText;
    }
    public State[] getNextStory()
    {
        return nextStates;
    }

}


