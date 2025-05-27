//////////////////////////////////////////////////////
//
//    File Name:     program3.c
//    Description:   Display the Pattern
//    Input:         integer
//    Output:        Formated String(With integer and Character)
//    Author:        Rutuja suresh Dhawale
//    Date:          27/05/2025
//
/////////////////////////////////////////////////////

//Input: iRow = 5    iCol = 5
/*Output: a    b    c   d   e
          1    2    3   4   5
          a    b    c   d   e
          1    2    3   4   5
          a    b    c   d   e
*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0; 
    int j = 0;
    char ch = 'a';

    for(i = 1; i <= iRow; i++ )
    {
        for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
        {
            if((i % 2) == 0) 
            {
                printf("%d\t", j);
            }
            else
            {
                printf("%c\t",ch);
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