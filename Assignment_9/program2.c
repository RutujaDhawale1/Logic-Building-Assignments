#include<stdio.h>

#define true 1
#define false 0

typedef int bool;

bool ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo /10;
    }
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet== true)
    {
        printf("it contains Zero");
    }
    else
    {
        printf("it not cantains Zero");
    }

    return 0;
}