// write a program to check whether a given number is three-digit or not.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if (x >= 100 && x <= 1000)
    {
        printf("It is a three digit number");
    }
    else{
        printf("It is not a three digit number ");
    }
    return 0;
}