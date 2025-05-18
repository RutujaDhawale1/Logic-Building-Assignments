#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt = -iNo; iCnt<=iNo;iCnt++)
    {
        printf(" %d\n",iCnt);
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//Time complexity 0(N)