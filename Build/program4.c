#include<stdio.h>

#define true 1
#define false 0

typedef int bool;
typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 135282752;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return(iResult == iMask);
}

int main()
{
    UINT iValue = 0;
    bool bRet = 0;

    printf("Enter the number:");
    scanf("%u", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("7th and 15th and 21th and 28th Bit is ON\n");
    }
    else
    {
        printf(" either 7th or 15th or 21th or 28th bit is OFF or All ");
    }

    return 0;
}