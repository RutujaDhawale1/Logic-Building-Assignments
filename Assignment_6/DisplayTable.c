#include<stdio.h>

void Table(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;

    for(iCnt=1; iCnt<=10;iCnt++)
    {
        printf( "%d\n",iNo*iCnt);
    }


}

int main()
{
    int iValue=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;

}

//Time complexity 0(N)