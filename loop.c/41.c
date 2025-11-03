// Count digits of the given number .
#include <stdio.h>
int main()
{
    int x, count;
    count = 0;
    printf("Enter the number");
    scanf("%d", &x);
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    printf("%d",count);
    return 0;
}