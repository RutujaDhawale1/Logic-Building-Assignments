//////////////////////////////////////////////////////////////////////////
//
//    File Name :     program1.c
//    Description :   Accept N numbers from user and returns difference
//                    between Summation of even elements And Odd elements
//    Input :         integer
//    Output :        integer
//    Author :        Rutuja Suresh Dhawale
//    Date :          2/06/2025
//
///////////////////////////////////////////////////////////////////////////

/* Input : N : 6
        Elements : 85 66 3 80 93 88

Output : 53 (234 - 181)
*/


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum1 = 0, iSum2 = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        else if((Arr[iCnt] % 2) != 0)
        {
            iSum2 = iSum2 + Arr[iCnt];
        }
        iDiff = iSum1 - iSum2;
    }

    return iDiff;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element%d :", iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d", iRet);

    free(p);

    return 0;

}