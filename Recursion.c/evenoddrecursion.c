// To count number of even and odd digits in the given number .
#include <stdio.h>
void evenodd(int x, int count1, int count2)
{
    int y;
    if (x == 0)
    {
        printf("The number of even and odd digits in the given number is %d and %d", count1, count2);
        return;
    }
    y = x % 10;
    if (y % 2 == 0)
    {
        count1 = count1 + 1;
    }
    if (y % 2 == 1)
    {
        count2 = count2 + 1;
    }
    evenodd(x / 10, count1, count2);
    return;
}
int main()
{
    int x;
    printf("Enter the number :");
    scanf("%d", &x);
    evenodd(x, 0, 0);
    return 0;
}