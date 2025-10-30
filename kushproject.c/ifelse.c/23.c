#include <stdio.h>
int main()
{
    float x, y;
    printf("\nEnter Employee salary:");
    scanf("%f", &x);
    printf("\nEnter Years of service:");
    scanf("%f", &y);
    if (x <= 30000 && y < 6)
    {
        printf("\nNO BONUS");
    }
    else if (x > 30000 && y < 6)
    {
        printf("\n5 percent bonus");
        float bonus = (float)(x / 100) * 5;
        printf("\nbonus=%f", bonus);
        float final = x + bonus;
        printf("\nFinal salary of an employee=%f", final);
    }
    else if (x <= 50000 && (y >= 6 && y <= 10))
    {
        printf("\n8 percentbonus");
        float bonus = (float)(x / 100) * 8;
        printf("\nbonus=%f", bonus);
        float final = x + bonus;
        printf("\nFinal salary of an employee=%f", final);
    }
    else if (x > 50000 && (y >= 6 && y <= 10))
    {
        printf("\n10 percent bonus");
        float bonus = (float)(x / 100) * 10;
        printf("\nbonus=%f", bonus);
        float final = x + bonus;
        printf("\nFinal salary of an employee=%f", final);
    }
    else if (y > 10)
    {
        printf("\n12 percentbonus");
        float bonus = (float)(x / 100) * 12;
        printf("\nbonus=%f", bonus);
        float final = x + bonus;
        printf("\nFinal salary of an employee=%f", final);
    }
    else
    {
        printf("\nThank you");
    }
    return 0;
}
