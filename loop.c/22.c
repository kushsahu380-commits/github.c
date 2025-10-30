// Write a program to print the sum of squares of first 10 natural numbers using  a for loop.
#include <stdio.h>
int main()
{
    int a, sum;
    sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        a = i * i;
        sum = sum + a;
    }
    printf("The sum of squares of first 10 natural numbers=%d", sum);
    return 0;
}