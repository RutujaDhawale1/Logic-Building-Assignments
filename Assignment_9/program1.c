#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo<0)
    {
        iNo= -iNo;
    }

    while(iNo >= 1)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);

        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enetr number:");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;

}