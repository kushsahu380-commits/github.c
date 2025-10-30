// Write a program to count digit of a given number.
#include <stdio.h>
int main()
{
    int x, count;
    count = 0;
    printf("Enter x");
    scanf("%d", &x);
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    printf("\n The no of digits are %d.", count);
    return 0;
} 