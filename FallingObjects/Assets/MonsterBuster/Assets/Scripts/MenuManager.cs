using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    public GameObject MainScreen;
    public GameObject SettingsScreen;
    public GameObject LeaderBoardScreen;
    public GameObject Dialog;
    public GameObject CharacterScreen;
    public GameObject Upgrades;
    public GameObject Shop;
    public GameObject RoundButtonsDemo;

 void DisableAll()
    {
        MainScreen.SetActive(false);
        CharacterScreen.SetActive(false);
        Upgrades.SetActive(false);
        Shop.SetActive(false);
        RoundButtonsDemo.SetActive(false);
    }


    public void Show_MainScreen()
    {
        DisableAll();
        MainScreen.SetActive(true);
    }

    public void Show_Settings()
    {
        SettingsScreen.SetActive(true);
    }
    public void Hide_Settings()
    {
        SettingsScreen.SetActive(false);
    }
    public void Show_LeaderBoard()
    {
        LeaderBoardScreen.SetActive(true);
    }
    public void Hide_LeaderBoard()
    {
        LeaderBoardScreen.SetActive(false);
    }

    public void ShowDialog()
    {
        Dialog.SetActive(true);
    }
    public void HideDialog()
    {
        Dialog.SetActive(false);
    }
    public void Show_CharacterScreen()
    {
        DisableAll();
        CharacterScreen.SetActive(true);
    }
    public void Show_Upgrades()
    {
        DisableAll();
        Upgrades.SetActive(true);
    }
    public void Show_Shop()
    {
        DisableAll();
        Shop.SetActive(true);
    }
    public void Show_RoundButtonsDemo()
    {
        DisableAll();
        RoundButtonsDemo.SetActive(true);
    }
}
