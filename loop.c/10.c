// Display this AP-4,7,10,13,16......upto'n'.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n:");
    scanf("%d", &n);
    for (int i = 4; i <= n; i = i + 3)
    {
        printf("\n%d", i);
    }
    return 0;
}