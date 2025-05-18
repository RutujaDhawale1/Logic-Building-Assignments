#include<stdio.h>

double FhtoCs(float fTemp)
{
    float dCelcius = 0.0f;
    dCelcius = ((fTemp - 32) * (5.0 / 9.0));

    return dCelcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("The temperature in Celcius is %f", dRet);

    return 0;
}