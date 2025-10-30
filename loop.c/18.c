// Print the product of all the natural number from 1 to 10.
#include <stdio.h>
int main()
{
    int product = 1;
    for (int i = 1; i <= 10; i++)
    {
        product = product * i;
    }
    printf("\nThe product of all the natural number from 1 to 10=%d", product);
    return 0;
}