// Print the cube of first 10 natural numbers.
#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        int x = i * i * i;
        printf("\n%d", x);
    }
    return 0;
}