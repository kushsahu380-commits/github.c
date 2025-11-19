//   1
//  123
// 12345
//1234567
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    n = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= n; k++)
        {
            printf("%d", k);
        }
        n = n + 2;
        printf("\n");
    }
    return 0;
}