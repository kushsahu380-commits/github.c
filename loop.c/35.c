// Count how many even and odd digits  are there in a number .
#include <stdio.h>
int main()
{
    int x, y, count;
    printf("Enter the number :");
    scanf("%d", &x);
    while (x != 0)
    {
        y = x % 10;
        if (y % 2 == 0)
        {
            printf("\nEven digit =%d", y);
        }
        if (y % 2 == 1)
        {
            printf("\nOdd digit =%d", y);
        }
        x = x / 10;
    }
    return 0;
}