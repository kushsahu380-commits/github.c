// Make a function which calculates 'a' raised to the power b.
#include <stdio.h>
int powe(int a, int b)
{
    int y;
    if (b == 0)
    {
        return 1;
    }
    y = a * powe(a, b - 1);
    return y;
}
int main()
{
    int a, b, x;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    x = powe(a, b);
    printf("%d raised to the power %d = %d", a, b, x);
    return 0;
}