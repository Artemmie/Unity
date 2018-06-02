using UnityEngine;

public class CameraController : MonoBehaviour
{
    public float panSpeed = 20f;
    public float panBorderThick = 10f;
    public float scrollSpeed = 20f;
    public float minY = 20f;
    public float maxY = 120f;
    public Vector2 panLimit;


	// Update is called once per frame
	void Update ()
    {
        Vector3 pos = transform.position;
        if (Input.GetKey("w") || Input.mousePosition.y >= Screen.height - panBorderThick)
        {
            pos.x += panSpeed * Time.deltaTime;
        }
        else if (Input.GetKey("s") || Input.mousePosition.y <= panBorderThick)
        {
            pos.x -= panSpeed * Time.deltaTime;
        }
        if (Input.GetKey("a") || Input.mousePosition.x <= panBorderThick)
        {
            pos.z += panSpeed * Time.deltaTime;
        }
        else if (Input.GetKey("d") || Input.mousePosition.x >= Screen.width - panBorderThick)
        {
            pos.z -= panSpeed * Time.deltaTime;
        }

        float scroll = Input.GetAxis("Mouse ScrollWheel");
        pos.y -= scroll * scrollSpeed * 100f * Time.deltaTime;

        pos.z = Mathf.Clamp(pos.z, -panLimit.y, panLimit.y);
        pos.x = Mathf.Clamp(pos.x, -panLimit.x, panLimit.x);
        pos.y = Mathf.Clamp(pos.y, minY, maxY);
        transform.position = pos;
		
	}
}
