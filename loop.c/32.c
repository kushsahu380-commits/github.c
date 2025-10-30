// Write a program to to print the sum of given number and it's reverse.
#include <stdio.h>
int main()
{
    int x, y, reverse, original, sum;
    reverse = 0;
    printf("Enter the number :");
    scanf("%d", &x);
    original = x;
    while (x != 0)
    {
        y = x % 10;
        reverse = reverse * 10 + y;
        x = x / 10;
    }
    sum = original + reverse;
    printf(" The sum of given number and it's reverse=%d", sum);
    return 0;
}