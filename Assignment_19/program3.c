////////////////////////////////////////////////////////////////////////////////////////
//
//    File Name :     program3.c
//    Description :   Accept N numbers from user Check whether that number contains 11 
//                    in it or not
//    Input :         integer
//    Output :        integer
//    Author :        Rutuja Suresh Dhawale
//    Date :          10/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

/* Input : N : 6
        Elements : 85 66 11 80 93 88

Output : 11 is present
*/


#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int bool;

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
           return false;
        }
        else
        {
          return true;   
        } 
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = false;

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

    bRet = Check(p, iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }

    free(p);

    return 0;

}
