///////////////////////////////////////////////////////////////////////
//
//      File Name   : program3.c
//      Description : write program which Accept String from user and
//                    toggel the  case
//      Input       : String
//      Output      : String
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  Marvellous Multi OS
output : mARVELLOUS mULTI os
*/

#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
           *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
           *str = *str + 32;
        }
        str++;
    } 
}
int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n]s",arr);

    strtogglex(arr);

    printf("Modifiedn string is :%s\n", arr);

    return 0;
}