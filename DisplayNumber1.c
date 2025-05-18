#include<stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("The Number is Small");
    }
    else if((iNo>=50)&&(iNo<=100))
    {
        printf("The Number is Medium");
    }
    else if(iNo>100)
    {
        printf("The Number is Large");
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Number(iValue);
    
    return 0;
}