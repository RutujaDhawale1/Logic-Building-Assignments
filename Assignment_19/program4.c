////////////////////////////////////////////////////////////////////////////////////////
//
//    File Name :     program4.c
//    Description :   Accept N numbers from user and return frequency of 11 from it 
//    Input :         integer
//    Output :        integer
//    Author :        Rutuja Suresh Dhawale
//    Date :          11/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

/* Input : N : 6
Elements : 85 66 11 80 93 88

Output : 1
*/


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt1 = 0, iCount = 0; 

    for(iCnt1 = 0; iCnt1 < iLength; iCnt1++)
    {
        if(Arr[iCnt1] == 11)
        {
            iCount++;
        }
    }
    return iCount;
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

    printf("%d", iRet);

    free(p);

    return 0;

}
