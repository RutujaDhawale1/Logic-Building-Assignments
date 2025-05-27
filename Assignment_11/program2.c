//////////////////////////////////////////////////////
//
//    File Name:     program2.c
//    Description:   Display the Pattern
//    Input:         integer
//    Output:        String(With numbers and Symbols)
//    Author:        Rutuja suresh Dhawale
//    Date:          27/05/2025
//
/////////////////////////////////////////////////////


//Input:5
//output: 5   #     4    #    3    #     2     1     #    

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);

        printf("#\t",iCnt);
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