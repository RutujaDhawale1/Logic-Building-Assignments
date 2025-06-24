///////////////////////////////////////////////////////////////////////
//
//      File Name   : program3.c
//      Description : write program which Accept String from user and
//                    one character return index of first that character
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input : MArvellous Infosystems
        v
output : 3
*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    while(*str != '\0')
    {
        if((*str == ch) || (ch >= 'A') || (ch <= 'Z') || (ch >= 'a') || (ch <= 'z'))
        {
            return iIndex;
        }
        str++;
        iIndex++;
    }
    return - 1;
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

    iRet = FirstChar(arr, cValue);

    printf("character Location is :%d", iRet);

    return 0;
}