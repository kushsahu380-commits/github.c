// Write a program to print all the ODD numbers from 1 to 100.
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            printf("\n%d", i);
        }
    }
    return 0;
}