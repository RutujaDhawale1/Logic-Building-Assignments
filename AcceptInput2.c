/////////////////////////////////////////////////////////////////////////////////
//
//   File Name:     AcceptInput2.c
//   Description:   Accept number and print that number of * on screen               
//   Author:        Rutuja suresh Dhawale
//   Date:          11/05/2025
//
/////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

void Accept(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("*",iCnt);
    }
}

int main()
{
    int iValue=0;
    iValue=5;
    Accept(iValue);
    return 0;
}