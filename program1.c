#include<stdio.h>

double CircleArea(float fRadius)
{
    float Area = 0.0f;
    float PI = 3.14f;

    Area = 3.14 * fRadius * fRadius;

    return Area;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius:");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf(" The Area of circle is %.4f",dRet);

    return 0;
}