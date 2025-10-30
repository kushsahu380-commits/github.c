// Print the factorial of first "n" numbers.
#include <stdio.h>
int main()
{
    int n, product;
    product = 1;
    printf("Enter n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    return 0;
}