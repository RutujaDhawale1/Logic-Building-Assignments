///////////////////////////////////////////////////////////////////////
//
//      File Name   : program4.c
//      Description : write program which Accept String from user and
//                    display only digits from that string
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input : marve89llous121 
output : 89121
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
           printf("%c", *str);
        }
        str++;
    } 
}
int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n]s",arr);

    DisplayDigit(arr);

    return 0;
}