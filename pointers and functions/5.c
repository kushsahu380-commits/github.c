#include <stdio.h>
int factorial(int n, int x)
{
    for (int i = 1; i <= n; i++)
    {
        x = x * i;
    }
    return x;
}
int main()
{
    int n, x;
    x = 1;
    printf("Enter the number :\n");
    scanf("%d", &n);
    x = factorial(n, x);
    printf("n!=%d", x);
    return 0;
}