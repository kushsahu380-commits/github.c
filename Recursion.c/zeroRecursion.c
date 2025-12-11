// To count no of zeroes in the given number .
#include <stdio.h>
int zeroes(int x, int z)
{
    int y;
    if (x == 0)
    {
        return z;
    }
    y = x % 10;
    if (y == 0)
    {
        z = z + 1;
    }
    return zeroes(x / 10, z);
}
int main()
{
    int x, y, gun, z;
    z = 0;
    printf("Enter the number :");
    scanf("%d", &x);
    gun = zeroes(x, 0);
    printf("Number of zeroes in the %d = %d", x, gun);
    return 0;
}