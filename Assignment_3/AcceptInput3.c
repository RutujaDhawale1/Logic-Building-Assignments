///////////////////////////////////////////////////////////////////////////////////////////////////
//
//   File Name:     AcceptInput3.c
//   Description:   print even factors of number       
//   Author:        Rutuja suresh Dhawale
//   Date:          11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo ;
    }
    for(i=1;i<=(iNo/2);i++)
    {
        if(((iNo%i)==0)&&(i%2==0))
        {
            printf("%d\n",i);
        }
    } 

}

int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}