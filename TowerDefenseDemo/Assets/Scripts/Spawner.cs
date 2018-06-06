using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Spawner : MonoBehaviour {

    public RedTrooper redTroop;
    public BlueTrooper blueTroop;
    private int spawn = 5;

    [SerializeField]
    List<RedTrooper> redTroopsList = new List<RedTrooper>();
    [SerializeField]
    List<BlueTrooper> blueTroopsList = new List<BlueTrooper>();

    void Update()
    {

        if (redTroopsList.Count <= 0 && blueTroopsList.Count <=0)
        {
            StartCoroutine(RespawnIfDead());
        }
        KilledOpponent();

    }

    IEnumerator RespawnIfDead()
    {
        for (int i = 0; i < spawn; i++)
        {
            if (redTroop != null && blueTroop != null)
            {
                RedTrooper redtrooper = Instantiate(redTroop);
                redTroopsList.Add(redtrooper);
                Debug.Log(redTroopsList.Count);
                BlueTrooper bluetrooper = Instantiate(blueTroop);
                blueTroopsList.Add(bluetrooper);
            }
            print("Red left: " + redTroopsList.Count + " And Blue amount: " + blueTroopsList.Count);
            yield return new WaitForSeconds(0.8f);
        }
    }

    public void KilledOpponent()
    {
        foreach (RedTrooper tempRed in redTroopsList.ToArray())
        {
            if (tempRed.isDead)
                redTroopsList.Remove(tempRed);
        }
        foreach (BlueTrooper tempBlue in blueTroopsList.ToArray())
        {
            if (tempBlue.isDead)
                blueTroopsList.Remove(tempBlue);
        }
    }
}
