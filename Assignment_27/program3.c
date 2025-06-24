///////////////////////////////////////////////////////////////////////
//
//      File Name   : program3.c
//      Description : write program which Accept String from user and
//                    copy capital characters of that string into another
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input : Marvellous Multi OS
output :MMOS
*/

#include<stdio.h>

void StrCpyCap(char *str, char *dest)
{
   while(*str != '\0') 
   {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str; 
            dest++;
        }
        str++;
    }
    *dest = '\0';
}
int main()
{
    char arr[20] = "Marvellous Multi OS";
    char brr[30];
   
    StrCpyCap(arr,brr);

    printf("%s", brr);

    return 0;
}