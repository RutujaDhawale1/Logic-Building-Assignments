///////////////////////////////////////////////////////////////////////////////////////////////////
//
//   File Name:     AcceptNumber1.c
//   Description:   Accept number from user if it is less than 10 print hello otherwise print demo              
//   Author:        Rutuja suresh Dhawale
//   Date:          11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");

    }
    else
    {
        printf("Demo");

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