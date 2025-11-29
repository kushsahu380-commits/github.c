// print sum from 1 to n.
#include <stdio.h>
int sum(int x, int n)
{
    if (x > n)
    {
        return 0;
    }
    return x + sum(x + 1, n);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int z = sum(1, n);
    printf("Sum from 1 to %d = %d", n, z);
    return 0;
}