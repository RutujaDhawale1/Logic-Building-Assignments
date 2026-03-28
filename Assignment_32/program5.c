#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 4026531855, iResult = 0; 
     
    iResult = iNo ^ iMask;  
    
    return iResult;
}

int main()
{
    UINT iValue = 0, iResult = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    iResult = ToggleBit(iValue);

    printf("Modified number after toggling first and last nibble is: %u\n", iResult);

    return 0;
}
