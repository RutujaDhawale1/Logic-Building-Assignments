//////////////////////////////////////////////
//
//    File Name:     program1.c
//    Description:   Display the Pattern
//    Input:         integer
//    Output:        character
//    Author:        Rutuja suresh Dhawale
//    Date:          27/05/2025
//
//////////////////////////////////////////////


//Input: 5
//Output: A   B   C    D    E

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++; 
    }
}

int main()
{
    int iValue = 0;

    printf("Enetr number of elements:");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

// Time Complexity of this code is O(n)