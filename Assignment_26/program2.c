///////////////////////////////////////////////////////////////////////
//
//      File Name   : program2.c
//      Description : write program which Accept String from user and
//                    one character return frequency of that character
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input : MArvellous Infosystems
        A
output : 1
*/

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
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

    iRet = CountChar(arr, cValue);

    printf("character frequency is :%d", iRet);

    return 0;
}