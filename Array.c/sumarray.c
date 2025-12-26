// Calculate the sum of all the elements in the given array .
#include <stdio.h>
int main()
{
    int sum, arr[5] = {2, 4, 6, 8, 10};
    sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum of all the elements in the given array = %d", sum);
    return 0;
}