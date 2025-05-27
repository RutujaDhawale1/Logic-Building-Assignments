///////////////////////////////////////////////////////////////////////////////////////////////////
//
//   File Name:     AcceptNumber2.c
//   Description:   display the first number in second number of times           
//   Author:        Rutuja suresh Dhawale
//   Date:          11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

void Display(int iNo,int Frequency)
{ 
    int iCnt=0;
    for(iCnt=1;iCnt<=Frequency;iCnt++)
    {
        printf("%d\n",iNo);
    }
    
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter Frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;

}