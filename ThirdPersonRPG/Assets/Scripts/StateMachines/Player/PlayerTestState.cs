using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTestState : PlayerBaseState
{
    private float timer = 0f;
    public PlayerTestState(PlayerStateMachine stateMachine) : base(stateMachine) {}

    public override void Enter()
    {
        Debug.Log("Enter");
        stateMachine.InputReader.JumpEvent += OnJump;
    }
    public override void Tick(float deltaTime)
    {
        timer += deltaTime;
        Debug.Log(timer);
       // if (timer <= 0f) stateMachine.SwitchState(new PlayerTestState(stateMachine));
    }
    public override void Exit()
    {
        Debug.Log("Exit");
        stateMachine.InputReader.JumpEvent -= OnJump;
    }

    private void OnJump()
    {
        timer = 0f;
        stateMachine.SwitchState(new PlayerTestState(stateMachine));
    }
}
