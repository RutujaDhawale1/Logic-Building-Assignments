#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 1 << 6; 

    if (iNo & iMask) 
    {
        iNo = iNo & (~iMask); 
    }

    return iNo;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%u", &iValue);
    
    iRet = OffBit(iValue);

    printf("Modified number is: %u\n", iRet);

    return 0;
}
