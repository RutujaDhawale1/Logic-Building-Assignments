#include <stdio.h>

int MaxDiagonal(int Arr[][4], int iRow, int iCol)
{
    int i = 0, j = 0;
    int iMax = Arr[0][0];

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == j)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
            if(i + j == iRow - 1)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }
    }

    return iMax;
}

int main()
{
    int Arr[4][4];
    int iRow = 4, iCol = 4;
    int i = 0, j = 0;
    int iRet = 0;

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    iRet = MaxDiagonal(Arr, iRow, iCol);

    printf("Largest number from both diagonals is: %d\n",iRet);

    return 0;
}
