//////////////////////////////////////////////////////
//
//    File Name:     program2.c
//    Description:   Display the Pattern
//    Input:         integer
//    Output:        integer
//    Author:        Rutuja suresh Dhawale
//    Date:          27/05/2025
//
/////////////////////////////////////////////////////

//Input: iRow = 4       iCol = 4

/*Output:  2    4   6   8   10
           1    3   5   7   9
           2    4   6   8   10
           1    3   5   7   9
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0; 
    int j = 0;

    for(i = 1; i <= iRow; i++ )
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) != 0) 
            {
                printf("%d\t", j*2);
            }
            else 
            {
                printf("%d\t",(j*2) -1);
            }
            
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

//Time Complexity is O(2N)



