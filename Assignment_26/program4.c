///////////////////////////////////////////////////////////////////////
//
//      File Name   : program3.c
//      Description : write program which Accept String from user and
//                    one character return index of last that character
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input : MArvellous Infosystems
        m
output : 20
*/

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iIndex1 = 0;
    int iIndex2 = -1;

    while(*str != '\0')
    {
        if((*str == ch) || (ch >= 'A') || (ch <= 'Z') || (ch >= 'a') || (ch <= 'z'))
        {
            iIndex2 = iIndex1;
        }
        str++;
        iIndex1++;
    }
    return iIndex2;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n]s",arr);

    printf("enter the character:");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("character Location is :%d", iRet);

    return 0;
}