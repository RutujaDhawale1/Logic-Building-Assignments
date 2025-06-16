/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File Name :     program1.c
//    Description :   Accept N numbers from user and accept one No check it is present or not 
//    Input :         integer
//    Output :        string
//    Author :        Rutuja Suresh Dhawale
//    Date :          13/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

/* Input : N : 6
NO : 66
Elements : 85 66 11 80 93 88

Output : true
*/


#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int bool;

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0; 

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
        } 
    }
    return false;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue;
    int *p = NULL;
    bool bRet = false;

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

    bRet = Check(p, iSize, iValue);

    if(bRet == true)
    {
        printf("Number is Present %d ", bRet);
    }
    else
    {
        printf("Number is not present %d", bRet);
    }

    free(p);

    return 0;

}
