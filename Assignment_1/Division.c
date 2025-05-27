////////////////////////////////////////
//
//  File Name:      Division.c
//  Descreption:    Divide two numbers
//  Author:         Rutuja Suresh Dhawale
//  Date:           11/05/2025
//
////////////////////////////////////////



#include<stdio.h>

int Divide(int iNo1,int iNo2)          // User Defined Function
{
    int iAns = 0;                       // Local variable 
    if(iNo2 == 0)
    {
        return -1;                    
    }

    iAns = iNo1/iNo2;                   // Performs Division
    return iAns;
}

int main()
{
    int iValue1 = 15 , iValue2 = 5;
    int iRet = 0;
    iRet = Divide(iValue1,iValue2);     // Calling the Division Function with passing two parameters
    printf("Division is %d",iRet);
    return 0;
}