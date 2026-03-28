#include<stdio.h>

int AddDiagonal(int Arr[][4], int iRow, int iCol)
{
    int i = 0, j = 0, iSum = 0;

    for(i = 0; i < iRow && i < iCol; i++)
    {
        iSum = iSum + Arr[i][i];
    }

    return iSum;
}

int main()
{
    int Arr[4][4];
    int i = 0, j = 0;
    int iRow = 4, iCol = 4;
    int iRet = 0;

    printf("Enter elements of matrix:\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    iRet = AddDiagonal(Arr, iRow, iCol);

    printf("Addition of diagonal elements is: %d\n", iRet);

    return 0;
}
