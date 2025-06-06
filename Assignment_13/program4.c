//////////////////////////////////////////////////////
//
//    File Name:     program4.c
//    Description:   Display the Pattern
//    Input:         integer
//    Output:        integer
//    Author:        Rutuja suresh Dhawale
//    Date:          27/05/2025
//
/////////////////////////////////////////////////////

//Input: iRow = 4       iCol = 5

/*Output:  4    4   4   4   4   
           3    3   3   3   3
           2    2   2   2   2
           1    1   1   1   1
*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0; 
    int j = 0;

    for(i = iRow; i >= 1; i-- )
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows:");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns:");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}