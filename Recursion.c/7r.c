// Make a function to print nth fabonacci series .
#include <stdio.h>
void fabonacci(int n, int a, int b)
{
    int c;
    if (n == 0)
    {
        return;
    }
    c = a + b;
    a = b;
    b = c;
    printf("%d\n", c);
    fabonacci(n - 1, a, b);
    return;
}
int main()
{
    int a, b, c, n;
    a = 0;
    b = 1;
    printf("Enter n");
    scanf("%d", &n);
    printf("%d\n%d\n", a, b);
    fabonacci(n, a, b);
    return 0;
}