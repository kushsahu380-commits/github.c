// Print the sum of all the even number between 1 and 100.
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("\nSum of all the even number between 1 and 100=%d", sum);
    return 0;
}