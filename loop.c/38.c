// write a program to print all the armstrong numbers between 1 and 500.
#include <stdio.h>
#include <conio.h>
int main()
{
    int x, n, y, z;
    for (int i = 1; i <= 500; i++)
    {
        n = i;
        z = 0;
        while (n != 0)
        {
            y = n % 10;
            x = y * y * y;
            z = z + x;
            n = n / 10;
        }
        if (z == i)
        {
            printf("\t%d", i);
        }
    }
    return 0;
}