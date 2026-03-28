#include<stdio.h>

typedef unsigned int UINT;

UINT OffBitMultiple(UINT iNo)
{
    UINT iMask1 = 1, iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1<<6;
    iMask2 = iMask2<<9;

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;
   
    iResult = iNo & (iMask1 & iMask2);
    
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%u",&iValue);
    
    iRet = OffBitMultiple(iValue);

    printf("Updated number is :%u\n",iRet);

    return 0;
}