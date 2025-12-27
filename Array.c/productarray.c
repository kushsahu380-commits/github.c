// Calculate the product of all the elements in the given array .
#include <stdio.h>
int main()
{
    int product, arr[5] = {2, 4, 6, 8, 10};
    product = 1;
    for (int i = 0; i <= 4; i++)
    {
        product = product * arr[i];
    }
    printf("The product of all the elements in the given array = %d", product);
    return 0;
}