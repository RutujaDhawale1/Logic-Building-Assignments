//////////////////////////////////////////////////////
//
//    File Name:     program4.c
//    Description:   Display the Pattern
//    Input:         integer
//    Output:        String(With numbers and Symbols)
//    Author:        Rutuja suresh Dhawale
//    Date:          27/05/2025
//
/////////////////////////////////////////////////////


//Input: 4
//Output: #   1   *   #    2   *    #   3   *   #    4   * 

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t", iCnt);
        printf("%d\t", iCnt);
        printf("*\t", iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number of elemets:");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

// Time Complexity is O(n) 