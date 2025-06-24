///////////////////////////////////////////////////////////////////////
//
//      File Name   : program5.c
//      Description : write program which Accept String from user and
//                    count number of white spaces
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input : MArvellous Infosystems
        A
output : character found
*/

#include<stdio.h>
#define true 1
#define false 0

typedef int bool;

bool ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        str++;
    }
    return false;
}
int main()
{
    char arr[20];
    char cValue;
    bool bRet = false;

    printf("Enter string:");
    scanf("%[^'\n]s",arr);

    printf("enter the character:");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}