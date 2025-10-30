// Write a program to print the sum of all the even digits of a given number .
#include <stdio.h>
int main()
{
    int x, sum, y;
    sum = 0;
    printf("Enter the number: ");
    scanf("%d", &x);
    while (x != 0)
    {
        y = x % 10;
        if (y % 2 == 0)
        {
            sum = sum + y;
        }
        x = x / 10;
    }
    printf("The sum of all the even digits of a given number is %d:", sum);
    return 0;
}