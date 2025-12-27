#include <stdio.h>
int main()
{
    int max, arr[5] = {2, -17, 5, 12, -10};
    max = arr[0];
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The greatest number in the given array is %d ", max);
    return 0;
}