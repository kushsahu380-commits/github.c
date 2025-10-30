// Write a program to print sum of digit of a given number .
#include <stdio.h>
int main()
{
    int x, sum, lastdigit;
    sum = 0;
    printf("Enter a number :");
    scanf("%d", &x);
    while (x != 0)
    {
        lastdigit = x % 10;
        sum = sum + lastdigit;
        x = x / 10;
    }
    printf("The sum of digit of a given number is %d", sum);
    return 0;
}