// Write a program to check whether a number is even and also divided by 3.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d", &x);
    if (x % 2 == 0 && x % 3 == 0)
    {
        printf("yes it is even and also divisible by 3");
    }
    else
    {
        printf("it is neither even nor divisible by 3");
    }
    return 0;
}