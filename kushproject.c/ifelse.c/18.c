// write a program to check whether to calulate water bill.
#include <stdio.h>
int main()
{
    float liters;
    printf("Enter no of liters water used: ");
    scanf("%f", &liters);
    if (liters <= 1000)
    {
        float total = liters * 0.50;
        printf("\nWater bill is %f", total);
    }
    else if (liters > 1000 && liters <= 2000)
    {
        float total = liters;
        printf("\nWater bill is be %f", total);
    }
    else if (liters > 2000)
    {
        float total = liters * 1.5;
        printf("\nWater bill is be %f", total + 50);
    }
    else
    {
        printf("\nJal hi jeevan hai");
    }
    return 0;
}