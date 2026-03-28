#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1); 
    iResult = iNo ^ iMask;        
    return iResult;
}

int main()
{
    UINT iValue = 0, iPosition = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter bit position: ");
    scanf("%u", &iPosition);

    iRet = ToggleBit(iValue, iPosition);

    printf("Modified number after toggling bit at position %u is: %u\n", iPosition, iRet);

    return 0;
}
