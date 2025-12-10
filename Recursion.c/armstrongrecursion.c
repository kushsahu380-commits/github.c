// To check wheather the given number is a armstrong or not .
#include <stdio.h>
int armstrong(int n, int p)
{
    int m;
    if (n == 0)
    {
        return p;
    }
    m = n % 10;
    return armstrong(n / 10, p + (m * m * m));
}
int main()
{
    int n, m, p;
    p = 0;
    printf("Enter the number :");
    scanf("%d", &n);
    int x = armstrong(n, 0);
    if (n == x)
    {
        printf("%d is the armstrong number :", n);
    }
    else
    {
        printf("%d is the not an armstrong number :", n);
    }
    return 0;
}