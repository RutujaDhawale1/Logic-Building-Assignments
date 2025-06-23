///////////////////////////////////////////////////////////////////////
//
//      File Name   : program1.c
//      Description : write a program which display ASCII table
//      Author      : Rutuja Suresh Dhawale
//      Date        : 16/06/2025
//
///////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayASCII()
{ 
    int iCnt = 0;
   
   
        for(iCnt = 0; iCnt <= 255; iCnt++)
        {
             if((iCnt >= '0') && (iCnt <= '255'))
            {
                printf("Symbol: %c\t", iCnt);
                printf(" Decimal: %d\t", iCnt );
                printf(" octal: %o\t", iCnt );
                printf(" HexaDecimal: ox%X\t", iCnt );

            }
            printf("\n");
    }
}

int main()
{
    DisplayASCII();

    return 0;
}