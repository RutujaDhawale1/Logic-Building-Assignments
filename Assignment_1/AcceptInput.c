////////////////////////////////////////////////////////////////////
//
//   File Name:     AcceptInput.c
//   Description:   to check the number is Divisible by 5 or not
//   Author:        Rutuja suresh Dhawale
//   Date:          11/05/2025
//
///////////////////////////////////////////////////////////////////



#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()

{
    int iValue=0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d\n",&iValue);

    bRet=Check(iValue);

    if(bRet==TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}