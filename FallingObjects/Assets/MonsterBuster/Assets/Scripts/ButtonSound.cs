
using UnityEngine;
using UnityEngine.EventSystems;
public class ButtonSound : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
{

    public bool soundOnClick = true;
    [Space]
    public bool soundOnHover = true;
    public bool soundOnUnHover = true;

    public void OnPointerClick(PointerEventData eventData)
    {
        if(soundOnClick)
        MySounder.instance.Click();
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        if (soundOnHover)
            MySounder.instance.Hover();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        if(soundOnUnHover)
        MySounder.instance.Hover();
    }
}
