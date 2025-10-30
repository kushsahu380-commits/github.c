// write a program to calculate electricity bill based on unit charges.
#include <stdio.h>
int main()
{
    float units;
    printf("Enter units:");
    scanf("%f", &units);
    if (units <= 100)
    {
        float Bill = (float)units * 1.5;
        printf("Total electricity bill is %f\n", Bill);
    }
    else if (units > 100 && units <= 200)
    {
        float Bill = (float)units * 2.5;
        printf("Total  electricity bill is %f\n", Bill);
    }
    else if (units > 200)
    {
        float Bill = (float)units * 3.5;
        printf("Total electricity bill is %f\n", Bill);
    }
    else
    {
        printf("Bijli ka bill ..........bharega\n");
    }
    return 0;
}