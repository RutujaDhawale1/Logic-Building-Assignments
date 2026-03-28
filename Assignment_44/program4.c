#include <stdio.h>

int AddColumn(int Arr[][4], int iRow, int iCol)
{
    int i = 0, j = 0;
    int iSum = 0;

    for(j = 0; j < iCol; j++)
    {
        for(i = 0; i < iRow; i++)
        {
            iSum = iSum + Arr[i][j];
        }
    }

    return iSum;
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

    iRet = AddColumn(Arr, iRow, iCol);

    printf("Addition of all column elements is: %d\n",iRet);

    return 0;
}
