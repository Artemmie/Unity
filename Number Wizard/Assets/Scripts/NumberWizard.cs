using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NumberWizard : MonoBehaviour
{
        int max;
        int min;
        int guess;
    // Start is called before the first frame update
    void Start()
    {
        startGame();
    }

    void startGame()
    {
        max = 50000;
        min = 1;
        max += 1;
        guess = (max + min) / 2;

        Debug.Log("Welcome to the number wizard!");
        Debug.Log("Pick a number between " + min + " and " + max);
        Debug.Log("Tell me if your number is higher or lower than " + guess);
        Debug.Log("Push Up = Higher, Push Down = Lower, Push Enter = Correct");

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            min = guess;
            nextGuess();
        }
        else if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            max = guess;
            nextGuess();
        }
        else if (Input.GetKeyDown(KeyCode.Return))
        {
            Debug.Log("That is the number!");
            startGame();
        }
        
    }
    void nextGuess()
    {
        guess = (max + min) / 2;
        Debug.Log("The number is higher than " + guess);
    }
}
