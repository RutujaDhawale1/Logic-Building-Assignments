//////////////////////////////////////////////////////
//
//    File Name:     program3.c
//    Description:   Display the Pattern
//    Input:         integer
//    Output:        character
//    Author:        Rutuja suresh Dhawale
//    Date:          27/05/2025
//
/////////////////////////////////////////////////////

//Input: iRow = 3      iCol = 5

/*Output:  A    A    A   A   A    A
           B    B    B   B   B    B
           C    C    C   C   C    C        
*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0; 
    int j = 0;
    char ch = 'A';

    for(i = 1, ch = 'A'; i <= iRow; i++, ch++ )
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
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