//////////////////////////////////////////////////////
//
//    File Name:     program5.c
//    Description:   Display the Pattern
//    Input:         integer
//    Output:        integer
//    Author:        Rutuja suresh Dhawale
//    Date:          27/05/2025
//
/////////////////////////////////////////////////////

//Input: iRow = 4       iCol = 4

/*Output:  1    2   3   4
           5    6   7   8
           9    10  11  12
*/


#include<stdio.h>

void Pattern(int iRow, int iCol,int n)
{
    int i = 0; 
    int j = 0;
    int iCount = 1;

    for(i = 1; i <= iRow; i++ )
    {
        for(j = 1; j <= iCol; j++)
        {
            if(iCount == n) iCount = 1;
            {
            printf("%d\t", iCount);
            iCount++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iNo = 0;

    printf("Enter the number of Rows:");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns:");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2, iNo);

    return 0;
}