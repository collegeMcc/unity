using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public static PlayerMovement Instance;

    public float walkSpeed;
    public float runSpeed;
    public float jumpPower;
    private float currentMoveSpeed;

    public CharacterController charControllter;
    private Vector3 moveDirection;

    private bool isGrounded;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
    }

    void Start()
    {       
    }

    void Update()
    {
        moveDirection = new Vector3(Input.GetAxis("Horizotal"), 0f, Input.GetAxis("Vertical"));

        var yVal = moveDirection.y;

        if (Input.GetKeyDown(KeyCode.LeftShift))
        {
            currentMoveSpeed = runSpeed;
        }
        else
        {
            currentMoveSpeed = walkSpeed;
        }

        charControllter.Move(moveDirection * currentMoveSpeed * Time.deltaTime);
    }
}
