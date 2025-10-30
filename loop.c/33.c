// Print the factorial of the given number'n'.
#include <stdio.h>
int main()
{
    int n, product;
    product = 1;
    printf("Enter n :");
    scanf("%d", &n);
    while (n > 0)
    {
        product = product * n;
        n--;
    }
    printf("n!=%d", product);
    return 0;
}