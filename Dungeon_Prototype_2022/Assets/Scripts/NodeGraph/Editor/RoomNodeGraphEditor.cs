using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
public class RoomNodeGraphEditor : EditorWindow
{
    private GUIStyle m_Style;
    private const float nodeWidth = 160f;
    private const float nodeHeight = 75f;
    private const int nodePadding = 25;
    private const int nodeBorder = 12;
    [MenuItem("Room Node Graph Editor", menuItem = "Window/Dungeon Editor/Room Node Graph Editor")]
    private static void OpenWinow()
    {
        GetWindow<RoomNodeGraphEditor>("Room Node Graph Editor");
    }
    private void OnEnable()
    {
        m_Style = new GUIStyle();
        m_Style.normal.background = EditorGUIUtility.Load("node1") as Texture2D;
        m_Style.normal.textColor = Color.white;
        m_Style.padding = new RectOffset(nodePadding, nodePadding, nodePadding, nodePadding);
        m_Style.border = new RectOffset(nodeBorder, nodeBorder, nodeBorder, nodeBorder);
    }
    private void OnGUI()
    {
        GUILayout.BeginArea(new Rect(new Vector2(100f, 100f), new Vector2(nodeWidth, nodeHeight)), m_Style);
        EditorGUILayout.LabelField("Node 1");
        GUILayout.EndArea();
        GUILayout.BeginArea(new Rect(new Vector2(300f, 300f), new Vector2(nodeWidth, nodeHeight)), m_Style);
        EditorGUILayout.LabelField("Node 1");
        GUILayout.EndArea();
    }
}
