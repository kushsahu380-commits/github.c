// Print all the odd numbers from one to hundred.
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