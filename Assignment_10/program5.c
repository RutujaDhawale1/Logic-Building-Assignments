#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0 , iSum2 = 0;
    int Diff = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit %2 == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;   
        }
        iNo = iNo / 10;
    }

    Diff = iSum1 - iSum2;
   
    return Diff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enetr Number:");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}