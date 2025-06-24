///////////////////////////////////////////////////////////////////////
//
//      File Name   : program2.c
//      Description : write program which Accept String from user and
//                    copy content of string into another string
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input : Marvellous Multi OS
        10
output :Marvellous
*/

#include<stdio.h>

void StrCpyX(char *str, char *dest, int iCnt)
{
   while((*str != '\0') && (iCnt != 0))
   {
        *dest = *str;
        str++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}
int main()
{
    char arr[20] = "Marvellous Multi OS";
    char brr[30];
   
    StrCpyX(arr,brr,10);

    printf("%s", brr);

    return 0;
}