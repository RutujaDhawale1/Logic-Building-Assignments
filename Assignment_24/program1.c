///////////////////////////////////////////////////////////////////////
//
//      File Name   : program1.c
//      Description : write program which Accept String from user and
//                    count number of capital characters
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

int CountCapital(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    } 
    return iCount;
}
int main()
{
    char arr[20];
    int iRet = 0; 
    
    printf("Enter string:");
    scanf("%[^'\n]s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);
 
    return 0;
}