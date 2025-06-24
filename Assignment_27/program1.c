///////////////////////////////////////////////////////////////////////
//
//      File Name   : program1.c
//      Description : write program which Accept String from user and
//                    copy content of string into another string
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input : Marvellous Multi OS
output :Marvellous Multi OS
*/

#include<stdio.h>

void StrCpyX(char *str, char *dest)
{
   while(*str != '\0')
   {
        *dest = *str;
        str++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[20] = "Marvellous Multi OS";
    char brr[30];
   
    StrCpyX(arr,brr);

    printf("%s", brr);

    return 0;
}