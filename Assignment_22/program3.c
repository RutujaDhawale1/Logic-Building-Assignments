///////////////////////////////////////////////////////////////////////
//
//      File Name   : program1.c
//      Description : Accept Character from user and Check whether it 
//                    is Digit or not(A-Z a-z)
//      Input       : integer
//      Output      : string
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  7
output : TRUE
Input : d
Output: FALSE
*/

#include<stdio.h>
#define true 1
#define false 0

typedef int bool;

bool ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9')) 
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character:");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit ");
    }
    else
    {
        printf("it is not a Digit");
    }

    return 0;
}