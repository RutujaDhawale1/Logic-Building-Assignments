#include<stdio.h>

double SquareMeter(float fNo)
{
    double SquareMeter = 0.0;
    SquareMeter = fNo * 0.092903;
    
    return SquareMeter;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter area in Square Feet:");
    scanf("%f", &fValue);

    dRet = SquareMeter(fValue);

    printf("The area in square meter is %f", dRet);

    return 0;

}