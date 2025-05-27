#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit1 = 0;
    int iDigit2 = 1;
    int iMul = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    
    while(iNo != 0)
    {
        iDigit1 = iNo % 10;
        if(iDigit1 != 0)
        {
        iMul = iMul * iDigit1;
        iDigit2 = 1;
        }
        iNo = iNo / 10;
    }

    if(!iDigit2)
    {
        return 0;
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}