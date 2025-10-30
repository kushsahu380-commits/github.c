// Write a  program to check wheather a number is prime or not using for loop.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter x:");
    scanf("%d", &x);
    for (int i = 2; i <= x - 1; i++)
    {
        if (x % i == 0)
        {
            printf("\n%d is a composite number:", x);
            break;
        }
        else
        {
            printf("\n%d is  a prime number :", x);
            break;
        }
    }
    return 0;
}