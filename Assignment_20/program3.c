/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File Name :     program3.c
//    Description :   Accept N numbers from user and accept one No and return index of Last 
//                    Occurence of that NO
//    Input :         integer
//    Output :        integer
//    Author :        Rutuja Suresh Dhawale
//    Date :          13/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

/* Input : N : 6
NO : 66
Elements : 85 66 11 80 66 88

Output : 4
*/


#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iLast = -1; 

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo) 
        {
            iLast = iCnt;
        } 
    }
    return iLast;
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

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("Number is not Present ");
    }
    else
    {
        printf("Last Occurance of number is %d", iRet);
    }

    free(p);

    return 0;

}
