#include <stdio.h>

typedef unsigned int UINT;  

UINT ONBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0, iResult = 0;

    iMask = 1 << (iPos - 1); 
    iResult = iNo & iMask;

    return iResult;     
}

int main()
{
    UINT iValue = 0, iPosition = 0;
    UINT iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter position: ");
    scanf("%d", &iPosition);

    iRet = ONBit(iValue, iPosition);

    printf("Modified number after turning ON bit at position %d is: %d\n", iPosition, iRet);

    return 0;
}
