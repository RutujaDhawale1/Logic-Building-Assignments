#include<stdio.h>

#define true 1
#define false 0

typedef int bool;
typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 131088;
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
        printf("5th and 18th Bit is ON\n");
    }
    else
    {
        printf(" either 5th or 18th bit is OFF");
    }

    return 0;
}