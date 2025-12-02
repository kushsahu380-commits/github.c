// Make a function to print nth fabonacci series .
#include <stdio.h>
int fibonacci(int n, int a, int b)
{
    int c;
    if (n == 0)
    {
        return b;
    }
    c = a + b;
    a = b;
    b = c;
    return fibonacci(n - 1, a, b);
}
int main()
{
    int a, b, n;
    a = 0;
    b = 1;
    printf("Enter n");
    scanf("%d", &n);
    int x = fibonacci(n, a, b);
    printf("%dth term of fibonacci series = %d", n, x);
    return 0;
}