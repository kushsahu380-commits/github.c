//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1
//  1 5 10 10 5 1
// 1 6 15 20 15 6 1
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
    for (int n = 0; n <= 6; n++)
    {
        for (int i = 0; i <= 6 - n; i++)
        {
            printf(" ");
        }
        for (int r = 0; r <= n; r++)
        {
            nCr = combination(n, r);
            printf("%d ", nCr);
        }
        printf("\n");
    }
    return 0;
}