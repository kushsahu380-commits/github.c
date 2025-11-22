//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1
//  1 5 10 10 5 1
// 1 6 15 20 15 6 1
#include <stdio.h>
int main()
{
    int x, y, s, nCr;
    for (int i = 0; i <= 6; i++)
    {
        for (int j = 0; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            x = 1;
            s = 1;
            y = 1;
            for (int k = 1; k <= i; k++)
            {
                x = x * k;
            }
            for (int k = 1; k <= j; k++)
            {
                s = s * k;
            }
            for (int k = 1; k <= (i - j); k++)
            {
                y = y * k;
            }
            int a = s * y;
            nCr = x / a;
            printf("%d ", nCr);
        }
        printf("\n");
    }
    return 0;
}