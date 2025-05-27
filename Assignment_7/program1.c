#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for(iCnt=1 ; iCnt <= iNo ; iCnt++)
    {
        printf( " *  ", iCnt);    
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
    printf("  #  " , iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Display(iValue);
}


// Time complexity is 0(N)