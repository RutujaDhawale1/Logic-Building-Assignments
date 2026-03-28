#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 << 6;
    iMask2 = iMask2 << 9;
   
    iResult = iNo ^ iMask1;
    iResult = iResult ^ iMask2;

    return iResult;
    
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%u",&iValue);
    
    iRet = ToggleBit(iValue);

    printf("Modified number is :%u\n",iRet);

    return 0;
}