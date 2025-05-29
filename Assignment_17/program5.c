////////////////////////////////////////////////
//
//     File Name:     program5.c
//     Description:   Display Pattern
//     Input:         integer
//     Output:        integer
//     Author:        Rutuja Suresh Dhawale
//     Date:          30/05/2025
//
///////////////////////////////////////////////

// Input :  iRow = 5    iCol = 5
/* Output : 1   2   3   4   5
            1   2           5
            1       3       5
            1           4   5
            1   2   3   4   5
*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j))
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t", j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows:");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns:");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}