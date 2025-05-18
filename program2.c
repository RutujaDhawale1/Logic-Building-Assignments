#include<stdio.h>

int DollarToINR(int iNo)
{
    int INR=0;
    int iRate=70;

    INR=iNo * iRate;

    return INR;
}

int main()
{
    int iValue=0 , iRet=0;

    printf("Enter Number Of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}