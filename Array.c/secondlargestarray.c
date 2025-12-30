// Find the second largest element in the given array .
#include <stdio.h>
#include <limits.h>
int main()
{
    int second = INT_MIN, max, arr[5] = {1, 5, 3, 12, 11};
    max = INT_MIN;
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // max = 12;
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] != max && second < arr[i])
        {
            second = arr[i];
        }
    }
    printf("%d", second);
    return 0;
}