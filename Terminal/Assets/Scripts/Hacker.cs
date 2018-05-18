using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hacker : MonoBehaviour
{
    int level;
    enum Screen { MainMenu, Password, Win };
    Screen currentScreen;
    void Start ()
    {
        ShowMainMenu();
    }
    private void ShowMainMenu()
    {
        currentScreen = Screen.MainMenu;
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
        else if (currentScreen == Screen.MainMenu) RunMainMenu(input);
        else if (currentScreen == Screen.Password) StartGame(input);
    }

    void RunMainMenu(string input)
    {
        if (input == "007") Terminal.WriteLine("Welcome back agent 007");
        else if (input == "1")
        {
            level = 1;
            Terminal.WriteLine("Welcome to level 1! Insert the password");
            currentScreen = Screen.Password;
        }
        else if (input == "2")
        {
            level = 2;
            Terminal.WriteLine("Welcome to level 2! Insert the password");
            currentScreen = Screen.Password;
        }
        else if (input == "3")
        {
            level = 3;
            Terminal.WriteLine("Welcome to level 3! Insert the password");
            currentScreen = Screen.Password;
        }
        else Terminal.WriteLine("Please choose a valid level!");
    }

    void StartGame(string input)
    {
        if (input == "dumbass" && level == 1)
            Terminal.WriteLine("Right password!");
        else if (input == "donkey" && level == 2)
            Terminal.WriteLine("Right password!");
        else if (input == "smartass" && level == 3)
            Terminal.WriteLine("Right password!");
        else
            Terminal.WriteLine("Wrong password");
    }
}
