#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt=0;

    for(iCnt = iNo; iCnt<=20;iCnt+=4)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}

//Time complexity 0(N)