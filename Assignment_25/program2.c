///////////////////////////////////////////////////////////////////////
//
//      File Name   : program2.c
//      Description : write program which Accept String from user and
//                    convert it  upper case
//      Input       : String
//      Output      : String
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  Marvellous Multi OS
output : MARVELLOUS MULTI OS
*/

#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
           *str = *str - 32;
        }
        str++;
    } 
}
int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n]s",arr);

    struprx(arr);

    printf("Modifiedn string is :%s\n", arr);

    return 0;
}