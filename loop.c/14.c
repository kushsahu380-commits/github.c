// Print all the numbers divisible by 2 and 5 between 1 to 100.
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0 && i % 5 == 0)
        {
            printf("\n%d", i);
        }
    }
    return 0;
}