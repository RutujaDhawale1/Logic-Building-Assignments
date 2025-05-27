///////////////////////////////////////////////////////////////////////////////////////////////////
//
//   File Name:     EvenOddNumber.c
//   Description:   Check Whether number is even or odd          
//   Author:        Rutuja suresh Dhawale
//   Date:          11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if((iNo%2)==0)
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
    BOOL bRet=FALSE;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);

    if(bRet==TRUE)
    {
        printf("%d is Even number\n",iValue);

    }
    else
    {
        printf("%d is odd number\n",iValue);
    }

    return 0;
}