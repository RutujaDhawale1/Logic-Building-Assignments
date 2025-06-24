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
output :1
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ') 
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
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n]s",arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return 0;
}