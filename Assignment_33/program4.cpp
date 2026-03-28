#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0, iResult = 0;
    int iCnt = 0;

    for(iCnt = iStart - 1; iCnt <= iEnd - 1; iCnt++)
    {
        iMask = iMask | (1 << iCnt);
    }

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iLocation1 = 0, iLocation2 = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the starting point :  \n";
    cin>>iLocation1;

    cout<<"Enter the ending point :  \n";
    cin>>iLocation2;

    iRet = ChangeBit(iValue,iLocation1,iLocation2);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}