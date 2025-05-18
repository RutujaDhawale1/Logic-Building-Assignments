#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    int iFact1=1;
    int iFact2=1;
    int Diff=0;
    int iCnt=0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iCnt%2)==0)
        {
        iFact1=iFact1*iCnt;
        }
        else
        {
            iFact2=iFact2*iCnt;
            
        }
        Diff=iFact1-iFact2;
    }
    return Diff;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf(" Factorial Difference is %d",iRet);

    return 0;
}


// Time complexity is 0(N)