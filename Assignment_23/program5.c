///////////////////////////////////////////////////////////////////////
//
//      File Name   : program5.c
//      Description : Accept character from user and Dispay its ASCII 
//                    value 
//      Input       : Character
//      Output      : int
//      Author      : Rutuja Suresh Dhawale
//      Date        : 17/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  A 
output : decimal  65
         octal    0101
         hexadecimal 0x41
*/

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Decimal :%d\n",ch);
        printf("Octal:%o\n",ch);
        printf("Hexadecimal:ox%X\n",ch);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character:");
    scanf("%c", &cValue);
 
   Display(cValue);
    
    return 0;
}