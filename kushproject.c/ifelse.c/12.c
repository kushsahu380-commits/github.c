// write a program to check whether a triangle is valid or not .(sum of two side>third side)
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
    if (x + y > z && y + z > x && x + z > y)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}