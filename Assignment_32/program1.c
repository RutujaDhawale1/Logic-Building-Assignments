#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo, int iPos)
{
    int iMask = 0;
    int iResult = 0;

    iMask = 1 << (iPos - 1);  
    iResult = iNo & iMask;  

    if(iResult == 0)
    {
        return false; 
    }
    else
    {
        return true;  
    }
}

int main()
{
    int iValue = 0, iPosition = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d",&iValue);

    printf("Enter position: ");
    scanf("%d", &iPosition);

    bRet = CheckBit(iValue, iPosition);

    if(bRet == true)
    {
        printf("Bit at position %d is ON",iPosition);
    }
    else
    {
        printf("Bit at position %d is OFF", iPosition);
    }

    return 0;
}
