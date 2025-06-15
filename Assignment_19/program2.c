////////////////////////////////////////////////////////////////////////////////////////
//
//    File Name :     program2.c
//    Description :   Accept N numbers from user and return difference between freqency
//                    of even and odd numbers
//    Input :         integer
//    Output :        integer
//    Author :        Rutuja Suresh Dhawale
//    Date :          10/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

/* Input : N : 7
        Elements : 85 66 3 80 93 88 90

Output : 1 (4 - 3)
*/


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, CountEven =0, CountOdd= 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
           CountEven++;
        }
        else
        {
            CountOdd++;
        } 
        iDiff = CountEven - CountOdd;
    }

    return iDiff;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    int iRet = 0;

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

    iRet = Frequency(p, iSize);

    printf("The frequency of even numbers is: %d",iRet);

    free(p);

    return 0;

}
