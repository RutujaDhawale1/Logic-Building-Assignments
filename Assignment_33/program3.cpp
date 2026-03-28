#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 1, iMask2 = 1, iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);
    iResult = (iNo & iMask1) || (iNo & iMask2);

    if((iResult == iMask1) || (iResult == iMask2))
    {
        return true;
    }    
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0;
    bool bRet = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    cout<<"Enter the first location \n";
    cin>>iLocation1;

    cout<<"Enter the second location \n";
    cin>>iLocation2;

    bRet = ChkBit(iValue,iLocation1,iLocation2);

    if(bRet == true)
    {
        cout<<"The bit is on at Position2 and Position2 \n";
    }
    else
    {
        cout<<"The bit is off at Position2 and Position2 \n";
    }

    return 0;
}
