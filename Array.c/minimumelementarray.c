#include <stdio.h>
int main()
{
    int min, arr[5] = {-4, 2, 5, 8, 6};
    min = arr[0];
    for (int i = 0; i <= 4; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("The maximum element in the given array = %d ", min);
    return 0;
}