#include<stdio.h>

typedef unsigned int UINT;

UINT ONBit(UINT iNo)
{
    UINT iMask = 0x0000000f, iResult = 0;

    iResult = iNo | iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the number:");
    scanf("%u", &iValue);
    
    iRet = ONBit(iValue);

    printf("Modified number is: %u\n", iRet);

    return 0;
}
