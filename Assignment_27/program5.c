///////////////////////////////////////////////////////////////////////
//
//      File Name   : program5.c
//      Description : write program to concat two string
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input : Marvellous Infosystems
        logic building
output :Marvellous Infosystems logic building
*/

#include<stdio.h>

void StrCatX(char *str, char *dest)
{
   while(*str != '\0') 
   {
        str++;
   }
   while(*dest != '\0')
   {
       *str = *dest;
       str++;
       dest++;
   }
    *str = '\0';
}
int main()
{
    char arr[20] = "Marvellous Multi OS";
    char brr[30] = "Logic Building";
   
    StrCatX(arr,brr);

    printf("%s\t", arr);

    return 0;
}