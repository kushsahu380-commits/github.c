//   A
//  AB
// ABC
//ABCD
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    n = 3;
    for (int i = 65; i <= 68; i++)
    {
        int j;
        for (j = 1; j <= n; j++)
        {
            printf(" ");
        }
        for (int k = 65; k <= i; k++)
        {
            printf("%c", k);
        }
        n--;
        printf("\n");
    }
    return 0;
}