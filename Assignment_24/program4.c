///////////////////////////////////////////////////////////////////////
//
//      File Name   : program4.c
//      Description : write program which Accept String from user and
//                    check whether it contains vowels or not
//      Input       : String
//      Output      : String
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
Input :  Marvellous
output : true
Input:   xyz
output:  false
*/

#include<stdio.h>
#define true 1
#define false 0

typedef int bool;

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u')
        || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O')|| (*str == 'U'))
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    char arr[20];
    bool bRet = false; 
    
    printf("Enter string:");
    scanf("%[^'\n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("There is no vowel");
    }
 
    return 0;
}