///////////////////////////////////////////////////////////////////////
//
//      File Name   : program2.c
//      Description : Accept character from user and display its
//                    Corresponding character
//      Input       : Character
//      Output      : string
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  Q
output : q
Input : m
Output: M
Input: 4
output:4
Input:%
output:%
*/

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c", ch + 32);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c", ch - 32);
    }
    else
    {
        printf("%c", ch);
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