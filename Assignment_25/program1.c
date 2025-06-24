///////////////////////////////////////////////////////////////////////
//
//      File Name   : program1.c
//      Description : write program which Accept String from user and
//                    convert it intolower case
//      Input       : String
//      Output      : String
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  Marvellous Multi OS
output : marvellous multi os
*/

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    strlwrx(arr);

    printf("Modifiedn string is :%s\n", arr);

    return 0;
}