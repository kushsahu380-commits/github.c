// Sum of digits of the number using function by recursion .
#include <stdio.h>
int sum(int x, int z)
{
    int y;
    if (x == 0)
    {
        return z;
    }
    y = x % 10;
    return sum(x / 10, z + y);
}
int main()
{
    int x;
    printf("Enter the number :");
    scanf("%d", &x);
    int add = sum(x, 0);
    printf("The sum of digits of %d = %d", x, add);
    return 0;
}