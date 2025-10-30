// write a program to check whether a given number is divisible by 5 and 11 pr not
#include <stdio.h>
int main()
{
    int x;
    printf("Enter x");
    scanf("%d", &x);
    if (x % 5==0 && x % 11==0)
    {
        printf("It is divisible by 5 and 11");
    }
    else
    {
        printf("It is not divisible by 5 and 11");
    }
    return 0;
}