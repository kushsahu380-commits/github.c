// Print all the numbers divisible by 3 between 1 and 100.
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("\n%d", i);
        }
    }
    return 0;
}