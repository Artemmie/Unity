using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthUIController : MonoBehaviour
{
    [SerializeField] GameObject heartContrainer;
    private float fillValue;
    // Update is called once per frame
    void Update()
    {
        fillValue = GameController.Health;
        fillValue = fillValue / GameController.MaxHealth;
        heartContrainer.GetComponent<Image>().fillAmount = fillValue;
    }
}
