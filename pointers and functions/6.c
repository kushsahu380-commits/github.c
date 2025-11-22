#include <stdio.h>
int combination(int n, int r)
{
    int x, s, nCr, y;
    x = 1;
    s = 1;
    y = 1;
    for (int i = 1; i <= n; i++)
    {
        x = x * i;
    }
    for (int i = 1; i <= r; i++)
    {
        s = s * i;
    }
    for (int i = 1; i <= (n - r); i++)
    {
        y = y * i;
    }
    int a = s * y;
    nCr = x / a;
    return nCr;
}
int main()
{
    int n, r, nCr;
    printf("Enter n");
    scanf("%d", &n);
    printf("Enter r");
    scanf("%d", &r);
    nCr = combination(n, r);
    printf("nCr=%d", nCr);
    return 0;
}