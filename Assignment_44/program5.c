#include <stdio.h>

int SwapRows(int Arr[][4], int iRow, int iCol)
{
    int i = 0, j = 0;
    int temp = 0;

    for(i = 0; i < iRow; i = i + 2)   
    {
        for(j = 0; j < iCol; j++)
        {
            temp = Arr[i][j];
            Arr[i][j] = Arr[i + 1][j];
            Arr[i + 1][j] = temp;
        }
    }

    return 0;
}

int main()
{
    int Arr[4][4];
    int iRow = 4, iCol = 4;
    int i = 0, j = 0, iRet = 0;

    printf("Enter elements of matrix:\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    iRet = SwapRows(Arr, iRow, iCol);

    printf("Matrix after swapping consecutive rows:\n", iRet);
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}