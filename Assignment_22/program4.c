///////////////////////////////////////////////////////////////////////
//
//      File Name   : program1.c
//      Description : Accept Character from user and Check whether it 
//                    is Small case or not(A-Z a-z)
//      Input       : integer
//      Output      : string
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  g
output : TRUE
Input : D
Output: FALSE
*/

#include<stdio.h>
#define true 1
#define false 0

typedef int bool;

bool ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z')) 
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is Small case character ");
    }
    else
    {
        printf("it is not a Small case character");
    }

    return 0;
}