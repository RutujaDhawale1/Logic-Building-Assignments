#include<stdio.h>
int MultFact(int iNo)
{
    int fact=1;
    int iCnt=0;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {  
        if((iNo%iCnt)==0)
        {
            fact=fact*iCnt;
            printf("%d\n",iCnt);
        }
    }
    return fact;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf(" the multiplication of factorial is %d",iRet);

    return 0;
}


////Time complexity 0(N/2)