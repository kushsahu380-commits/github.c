// WRITE A PROGRAM TO CALACULATE DISCOUNT ON SHOPPING.
#include <stdio.h>
int main()
{
    float amount;
    printf("\nEnter Amount:");
    scanf("%f", &amount);
    if (amount < 1000)
    {
        printf("\nNo Discount");
        printf("\nNet payable amount=%f", amount);
    }
    else if (amount > 1000 && amount <= 5000)
    {
        printf("\n10 percent discount");
        float discount = (float)(amount / 100) * 10;
        printf("\ndiscount is %f", discount);
        float net = amount - discount;
        printf("\nNet payable amount=%f", net);
    }
    else if (amount > 5000)
    {
        printf("\n20 percent discount");
        float discount = (float)(amount / 100) * 20;
        printf("\ndiscount is %f", discount);
        float net = amount - discount;
        printf("\nNet payable amount=%f", net);
    }
    else
    {
        printf("\nsave money for future");
    }
    return 0;
}