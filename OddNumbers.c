#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt=0;

    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)!=0)
        {
        printf("%d\n ",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}

//Time complexity 0(N)