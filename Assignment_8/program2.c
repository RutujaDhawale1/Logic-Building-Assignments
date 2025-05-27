#include<stdio.h>

double RectArea(float fWidth , float fHeight)
{
    double Area = 0.0;

    Area = fWidth * fHeight;

    return Area;

}

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width:");
    scanf("%f", &fValue1);

    printf("Enter Height:");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf(" The Area of Rectangle is %.3f ", dRet);

    return 0;
}