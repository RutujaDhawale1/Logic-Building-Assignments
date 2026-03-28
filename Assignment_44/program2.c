#include <stdio.h>

int Frequency(int Arr[][4], int iRow, int iCol, int iNo)
{
    int i = 0, j = 0;
    int iCount = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] == iNo)
            {
                iCount++;
            }
        }
    }

    return iCount;
}

int main()
{
    int Arr[4][4];
    int iRow = 4, iCol = 4;
    int i = 0, j = 0;
    int iNo = 0;
    int iRet = 0;

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    printf("Enter the number to find frequency of: ");
    scanf("%d", &iNo);

    iRet = Frequency(Arr, iRow, iCol, iNo);

    printf("Frequency of %d in the matrix is: %d\n", iNo, iRet);

    return 0;
}
