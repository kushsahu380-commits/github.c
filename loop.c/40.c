// Sum of digits of a given number .
#include <stdio.h>
int main()
{
    int x, sum, y;
    sum=0;
    printf("Enter the number");
    scanf("%d", &x);
    while (x != 0)
    {
        y = x % 10;
        sum = sum + y;
        x = x / 10;
    }
    printf(" Sum of digits of a given number =%d",sum);
    return 0;
}