// Count digits of the given number .
#include <stdio.h>
int main()
{
    int x, y, z, i;
    printf("Enter the number");
    scanf("%d", &x);
    for (i = 1; i <= 100; i++)
    {
        y = x % 10;
        if (y == 0)
        {
            break;
        }
        x = x / 10;
    }
    i--;
    printf("%d", i);
    return 0;
}