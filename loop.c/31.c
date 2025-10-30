// Print the sum of this series :
// 1-2+3-4+5-6....upto'n'.
#include <stdio.h>
int main()
{
    int n, x, y, sum;
    x = 0;
    y = 0;
    printf("Enter n :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            x = x + i;
        }
        if (i % 2 == 0)
        {
            y = y - i;
        }
        sum = x + y;
    }
    printf(" sum of this series =%d", sum);
    return 0;
}