#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << 6;
   
    iResult = iNo ^ iMask;

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