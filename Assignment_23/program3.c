///////////////////////////////////////////////////////////////////////
//
//      File Name   : program2.c
//      Description : Accept character from user and display all the
//                    characters from the input character
//      Input       : Character
//      Output      : character
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  Q
output : Q  R   S   T   U   V   W   X   Y   Z
Input : m
Output: m   i   k   j   i   h   g   f   e   d   c   b   a
*/

#include<stdio.h>

void Display(char ch)
{ 
    char iCnt = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t", iCnt );
        }
    }

    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t", iCnt);
        }          
    }
    else
    {
        return;
    }
    printf("\n");
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character:");
    scanf("%c", &cValue);
 
    Display(cValue);

    return 0;
}