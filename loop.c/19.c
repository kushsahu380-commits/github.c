// Display this gp-1,2,4,8,16,32.........upto'n'term.
#include <stdio.h>
#include <math.h>
int main()
{
    int n, a;
    a = 1;
    printf("Enter n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\n%d", a);
        a = a * 2;
    }
    return 0;
}