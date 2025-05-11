/////////////////////////////////////////////////////////////////////////////////
//
//   File Name:     AcceptInput1.c
//   Description:   Accept number from user and print that number of * on screen               
//   Author:        Rutuja suresh Dhawale
//   Date:          11/05/2025
//
/////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    iCnt=1;
    while(iCnt<=iNo)
    {
        printf("*",iCnt);
        iCnt++;

    }
}
int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;

}