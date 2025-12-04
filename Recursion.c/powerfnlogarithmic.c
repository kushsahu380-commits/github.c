// Power function (logarithmic).
#include <stdio.h>
int powe(int a, int b)
{
    int y;
    if (b == 1)
    {
        return a;
    }
    if (b % 2 == 0)
    {
        int x = powe(a, b / 2);
        y = x * x;
    }
    if (b % 2 == 1)
    {
        int x = powe(a, b / 2);
        y = x * x * a;
    }
    return y;
}
int main()
{
    int a, b;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    int power = powe(a, b);
    printf("%d", power);
    return 0;
}