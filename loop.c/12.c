// Print the square first fifteen natural numbers.
#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 1; i <= 15; i++)
    {
        int x = i * i;
        printf("\n%d", x);
    }
    return 0;
}