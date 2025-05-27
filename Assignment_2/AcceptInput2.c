/////////////////////////////////////////////////////////////////////////////////
//
//   File Name:     AcceptInput2.c
//   Description:   Accept number from user and print that number of * on screen               
//   Author:        Rutuja suresh Dhawale
//   Date:          11/05/2025
//
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    while(iNo>0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue=0;

    printf("Enter Number:");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;
}