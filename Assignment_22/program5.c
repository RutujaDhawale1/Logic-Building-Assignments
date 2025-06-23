///////////////////////////////////////////////////////////////////////
//
//      File Name   : program1.c
//      Description : Accept Division from user and depends on the 
//                    Division display exam timing
//      Input       : Character
//      Output      : string
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  C
output : your exam at 9.20 AM
Input : d
Output: your exam at 10.30 AM
*/

#include<stdio.h>


void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("your exam at 7AM");
    }
    else if((chDiv == 'B')||(chDiv == 'b'))
    {
        printf("your exam at 8.30 AM");
    }
    else if((chDiv == 'C')||(chDiv == 'c'))
    {
        printf("Your exam at 9.20 AM");
    }
    else if((chDiv == 'D')||(chDiv == 'd'))
    {
        printf("ypur exam at 10.30 AM");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter your Division:");
    scanf("%c", &cValue);
 
    DisplaySchedule(cValue);

    return 0;
}