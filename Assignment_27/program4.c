///////////////////////////////////////////////////////////////////////
//
//      File Name   : program4.c
//      Description : write program which Accept String from user and
//                    copy small characters of that string into another
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input : Marvellous Multi OS
output :arvellousulti
*/

#include<stdio.h>

void StrCpySmall(char *str, char *dest)
{
   while(*str != '\0') 
   {
        if((*str >= 'a') && (*str <= 'z'))
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
   
    StrCpySmall(arr,brr);

    printf("%s", brr);

    return 0;
}