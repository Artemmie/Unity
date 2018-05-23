using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hacker : MonoBehaviour
{
    int level;
    string password;
    enum Screen { MainMenu, Password, Win };
    Screen currentScreen;

    string[] level1 = { "books", "aisle", "self" };
    string[] level2 = { "random", "dick", "fine" };
    string[] level3 = { "hypnotize", "pepe", "cami" };

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
        else if (currentScreen == Screen.Password) Password(input);
    }

    void RunMainMenu(string input)
    {
        if (input == "007") Terminal.WriteLine("Welcome back agent 007");
        else if (input == "1")
        {
            level = 1;
            StartGame(level1);
        }
        else if (input == "2")
        {
            level = 2;
            StartGame(level2);
        }
        else if (input == "3")
        {
            level = 3;
            StartGame(level3);
        }
        else Terminal.WriteLine("Please choose a valid level!");
    }

    void StartGame(String[] levelArr)
    {
        Terminal.ClearScreen();
        Terminal.WriteLine("Insert the password");
        password = levelArr[UnityEngine.Random.Range(0, levelArr.Length)];
        currentScreen = Screen.Password;
    }

    private void Password(string input)
    {
        if (input == password && level == 1)
            Terminal.WriteLine("Right password!");
        else if (input == password && level == 2)
            Terminal.WriteLine("Right password!");
        else if (input == password && level == 3)
            Terminal.WriteLine("Right password!");
        else
            Terminal.WriteLine("Wrong password!");
    }
}
