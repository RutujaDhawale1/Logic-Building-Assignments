///////////////////////////////////////////////////////////////////////
//
//      File Name   : program3.c
//      Description : Accept N number from user return Difference between
//                    LArgest and Smallest number
//      Input       : Integer
//      Output      : Integer
//      Author      : Rutuja Suresh Dhawale
//      Date        : 14/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  N : 6
Elements : 85 66 3 66 93 88
Output: 3
*/


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0, iMin = 0, iDiff= 0;

    iMax = Arr[iCnt];
    iMin = Arr[iCnt];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
           iMax = Arr[iCnt];
        }
        else if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        iDiff = iMax - iMin;
    }
    return iDiff;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elemnts:");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enetr %d elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        printf("Enter element %d:", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p , iSize);

    printf("Differece is %d", iRet);

    free(p);

    return 0;
}