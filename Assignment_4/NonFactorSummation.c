#include<stdio.h>

int SumNonFact(int iNo)
{
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    return iSumNonFact - iSumFact;
} 

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("the difference between summation of all factors and non factors is %d",iRet);

    return 0;
}


//ime complexity 0(N)