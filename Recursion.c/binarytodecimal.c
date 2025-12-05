// Convert the given binary number to its respective decimal .
#include <stdio.h>
int decimal(int x, int u, int z)
{
    int y;
    if (x == 0)
    {
        return u;
    }
    y = x % 10;
    return decimal(x / 10, u + z * y, z * 2);
}
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d", &x);
    int y = decimal(x, 0, 1);
    printf("The decimal form of the given binary number %d = %d ", x, y);
    return 0;
}