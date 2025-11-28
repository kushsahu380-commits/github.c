// Write a program to print the factorial of first 'n' numbers.
#include <stdio.h>
int factorial(int i)
{
    int y = 1;
    for (int j = 1; j <= i; j++)
    {
        y = y * j;
    }
    return y;
}
int main()
{
    int n, z;
    printf("Enter first number :\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        z = factorial(i);
        printf("%d! = %d", i, z);
        printf("\n");
    }
    return 0;
}