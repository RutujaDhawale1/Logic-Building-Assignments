#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    int iFact=1;
    int iCnt=0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iCnt%2)==0)
        {
        iFact=iFact*iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}


// time coplexity 0(N)