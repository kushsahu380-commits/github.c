// Two numbers are entered through the keyboard .Write a program to find the value of one number raised to the power another number ..
#include <stdio.h>
int main()
{
    int x, y, z;
    z = 1;
    printf("Enter x");
    scanf("\n%d", &x);
    printf("Enter y");
    scanf("\n%d", &y);
    for (int i = 1; i <= y; i++)
    {
        z = z * x;
    }
    printf(" The value of one number raised to the power another number =%d", z);
    return 0;
}