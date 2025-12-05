// Product of digit using recursion .
#include <stdio.h>
int product(int x, int z)
{
    int y;
    if (x == 0)
    {
        return z;
    }
    y = x % 10;
    return product(x / 10, z * y);
}
int main()
{
    int x, y, z;
    printf("Enter the number : ");
    scanf("%d", &x);
    int digit = product(x, 1);
    printf("Product of digits of the %d = %d", x, digit);
    return 0;
}