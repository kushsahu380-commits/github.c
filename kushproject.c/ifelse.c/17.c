// write a program to calculate income tax based on salary slabs using if-else.
#include <stdio.h>
int main()
{
    float income;
    printf("Enter income:");
    scanf("%f", &income);
    if (income == 400000)
    {
        printf("No income tax");
        printf("\nNet income is %f", income);
    }
    else if (income > 400000 && income <= 800000)
    {
        float TAX = (float)(income * 5) / 100;
        printf("\nIncome tax is %f", TAX);
        float net = income - TAX;
        printf("\nFinal income is %f", net);
    }
    else if (income > 800000 && income <= 1200000)
    {
        float TAX = (float)(income * 10) / 100;
        printf("\nIncome tax is %f", TAX);
        float net = income - TAX;
        printf("\nFinal income is %f\n", net);
    }
    else if (income > 1200000 && income <= 1600000)
    {
        float TAX = (float)(income * 15) / 100;
        printf("\nIncome tax is %f\n", TAX);
        float net = income - TAX;
        printf("\nFinal income is %f\n", net);
    }
    else if (income > 1600000 && income <= 2000000)
    {
        float TAX = (float)(income * 20) / 100;
        printf("\nIncome tax is %f\n", TAX);
        float net = income - TAX;
        printf("\nFinal income is %f\n", net);
    }
    else if (income > 2000000 && income <= 2400000)
    {
        float TAX = (float)(income * 25) / 100;
        printf("\nIncome tax is %f\n", TAX);
        float net = income - TAX;
        printf("\nFinal income is %f\n", net);
    }
    else if (income > 2400000)
    {
        float TAX = (float)(income * 30) / 100;
        printf("\nIncome tax is %f", TAX);
        float net = income - TAX;
        printf("\nFinal income is %f", net);
    }
    else
    {
        printf("system is looting us");
    }
    return 0;
}