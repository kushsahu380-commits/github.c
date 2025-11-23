#include <stdio.h>
int permutation(int n, int r)
{
    int y, x, z;
    x = 1;
    y = 1;
    z = 1;
    for (int i = 1; i <= n; i++)
    {
        x = x * i;
    }
    for (int i = 1; i <= r; i++)
    {
        y = y * i;
    }
    for (int i = 1; i <= (n - r); i++)
    {
        z = z * i;
    }
    int nPr = x / z;
    return nPr;
}
int main()
{
    for (int n = 0; n <= 6; n++)
    {
        for (int i = 0; i <= 6 - n; i++)
        {
            printf(" ");
        }
        for (int r = 0; r <= n; r++)
        {
            int nPr = permutation(n, r);
            printf("%d ", nPr);
        }
        printf("\n");
    }
    return 0;
}