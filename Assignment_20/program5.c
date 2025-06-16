/////////////////////////////////////////////////////////////////////////////////////////////
//
//    File Name :     program5.c
//    Description :   Accept N numbers from user and return product of odd elemets
//    Input :         integer
//    Output :        integer
//    Author :        Rutuja Suresh Dhawale
//    Date :          13/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

/* Input : N : 6
Elements : 15 66 3 70 10 88

Output : 45
*/


#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iPro = 1; 

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iPro = iPro * Arr[iCnt];
        }
    }
    return iPro;
}

int main()
{
    int iSize = 0, iRet =0, iCnt = 0;
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

    iRet = Product(p, iSize);

    printf("Product is %d", iRet);

    free(p);

    return 0;

}
