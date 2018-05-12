using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hacker : MonoBehaviour
{
    int level;
    void Start ()
    {
        ShowMainMenu();
    }
    private void ShowMainMenu()
    {
        Terminal.ClearScreen();
        Terminal.WriteLine("Welcome back user #1337\n");
        Terminal.WriteLine("Press 1 for the local library");
        Terminal.WriteLine("Press 2 for the local police station");
        Terminal.WriteLine("Press 3 for the NASA\n");
        Terminal.WriteLine("Please choose your selection:");
    }

    void OnUserInput(string input)
    {
        if (input == "menu") ShowMainMenu();
        else if (input == "007") Terminal.WriteLine("Welcome back agent 007");
        else if (input == "1")
        {
            level = 1;
            StartGame();
        }
        else if (input == "2")
        {
            level = 2;
            StartGame();
        }
        else if (input == "3")
        {
            level = 3;
            StartGame();
        }
        else Terminal.WriteLine("Please choose a valid level!");
    }

    private void StartGame()
    {
        Terminal.WriteLine("You have chosen level number " + level);
    }
}
