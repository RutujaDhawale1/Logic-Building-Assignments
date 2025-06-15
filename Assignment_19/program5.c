////////////////////////////////////////////////////////////////////////////////////////
//
//    File Name :     program5.c
//    Description :   Accept N numbers from user and accept one No return frequency of NO 
//    Input :         integer
//    Output :        integer
//    Author :        Rutuja Suresh Dhawale
//    Date :          11/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

/* Input : N : 6
NO : 66
Elements : 85 66 11 80 93 88

Output : 1
*/


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0; 

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        } 
    }
    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue;
    int *p = NULL;
    int iRet = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    printf("Enter the number : ");
    scanf("%d", &iValue);


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

    iRet = Frequency(p, iSize, iValue);

    printf("%d", iRet);

    free(p);

    return 0;

}
