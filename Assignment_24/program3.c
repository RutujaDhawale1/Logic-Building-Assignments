///////////////////////////////////////////////////////////////////////
//
//      File Name   : program3.c
//      Description : write program which return difference between
//                    Frequency of small and capital characters
//      Input       : String
//      Output      : integer
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  Marvellous Multi OS
output : 4
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCount1 = 0, iCount2 = 0;
    int iDiff = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount1++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCount2++;
        }
        str++;
        iDiff = iCount1 - iCount2;
    } 
    return iDiff;
}
int main()
{
    char arr[20];
    int iRet = 0; 
    
    printf("Enter string:");
    scanf("%[^'\n]s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);
 
    return 0;
}