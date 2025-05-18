#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt=0;
    int iSum1=0,iSum2=0;
    int Diff=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(((iNo%iCnt)==0)&&(iNo%iCnt)!=0)
        {
            iSum1=iSum1+iCnt;
            iSum2=iSum2+iCnt;
            Diff=iSum1-iSum2;
        }
    }
    return Diff;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("the difference between summation of all factors and non factors is %d",iRet);

    return 0;
}

//Time complexity 0(N)