///////////////////////////////////////////////////////////////////////////////////////////////////
//
//   File Name:     AcceptInput2.c
//   Description:   print even factors of number       
//   Author:        Rutuja suresh Dhawale
//   Date:          11/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo ;
    }
    for(i=1;i<iNo;i++)
    {
        if(((iNo%i)==0)&&(iNo%2==0))
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

    DisplayFactor(iValue);

    return 0;
}