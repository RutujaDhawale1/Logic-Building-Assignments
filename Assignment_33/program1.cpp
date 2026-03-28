#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iCount = iCount + (iNo & 1);
        iNo = iNo >> 1;
    }

    return iCount;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"The number of one is : "<<iRet<<"\n";

    return 0;
}