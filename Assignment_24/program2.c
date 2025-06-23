///////////////////////////////////////////////////////////////////////
//
//      File Name   : program2.c
//      Description : write program which Accept String from user and
//                    count number of small characters
//      Input       : String
//      Output      : integer
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  Marvellous
output : 9
*/

#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(arr);

    printf("%d",iRet);
 
    return 0;
}