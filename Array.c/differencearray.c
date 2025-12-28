// Find the difference between the sum of elements of even indices and  sum of elements of odd indices of the given array.
#include <stdio.h>
int main()
{
    int sum, sum1 = 0, sum2 = 0, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i <= 9; i++)
    {
        // HERE "I" IS THE N = INDEX NUMBER OF THE ELEMENTS OF GIVEN ARRAY .
        if (i % 2 == 0) // for even sum
        {
            sum1 += arr[i];
        }
        else // for odd sum
        {
            sum2 += arr[i];
        }
    }
    sum = sum1 - sum2;
    printf("The difference between the sum of elements of even indices %d and  sum of elements of odd indices %d of the given array = %d ", sum1, sum2, sum);
    return 0;
}