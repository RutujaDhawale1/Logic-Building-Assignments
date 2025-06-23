///////////////////////////////////////////////////////////////////////
//
//      File Name   : program1.c
//      Description : Accept Character from user and Check whether it 
//                    is alphabet or not(A-Z a-z)
//      Input       : character
//      Output      : string
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  F
output : TRUE
Input : &
Output: FALSE
*/

#include<stdio.h>
#define true 1
#define false 0

typedef int bool;

bool ChkAlpha(char ch)
{
    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is character ");
    }
    else
    {
        printf("it is not a character");
    }

    return 0;
}