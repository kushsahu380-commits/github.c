// write a a program to check the temperature condition.
#include <stdio.h>
int main()
{
    int temp;
    printf("Enter the temperature in degree celcius:");
    scanf("%d", &temp);
    if (temp <= 0)
    {
        printf("\nFreezing");
    }
    else if (temp > 0 && temp <= 20)
    {
        printf("\nCold");
    }
    else if (temp > 20 && temp <= 35)
    {
        printf("\nWarm");
    }
    else
    {
        printf("\nHot");
    }
    return 0;
}