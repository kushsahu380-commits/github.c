#include <stdio.h>
#include <limits.h>
int main()
{
    int i, j, max = INT_MIN, arr[4][3] = {{4, 3, 2}, {5, 1, 6}, {7, 9, 12}, {8, 10, 11}};
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    int value = max;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (value == arr[i][j])
            {
                printf("arr[%d][%d]", i, j);
            }
        }
    }
    return 0;
}