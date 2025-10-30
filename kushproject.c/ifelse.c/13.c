// write a program to check weather a triangle is equilateral,isosceles or scalene.
#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter first side:");
    scanf("%d", &x);
    printf("Enter second side:");
    scanf("%d", &y);
    printf("Enter third side:");
    scanf("%d", &z);
    if (x == y && y == z)
    {
        printf("Equilateral");
    }
    else if (x == y || x == z || y == z)
    {
        printf("Isosceles");
    }
    else
    {
        printf("scalene");
    }
    return 0;
}

