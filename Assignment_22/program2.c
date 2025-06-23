///////////////////////////////////////////////////////////////////////
//
//      File Name   : program1.c
//      Description : Accept Character from user and Check whether it 
//                    is Capital or not(A-Z a-z)
//      Input       : character
//      Output      : string
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  F
output : TRUE
Input : d
Output: FALSE
*/

#include<stdio.h>
#define true 1
#define false 0

typedef int bool;

bool ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z')) 
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital character ");
    }
    else
    {
        printf("it is not a Capital character");
    }

    return 0;
}