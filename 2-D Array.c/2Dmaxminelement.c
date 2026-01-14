// FIND OUT THE MAXIMUM ELEMENT AND MINIMUM ELEMENT IN THE GIVEN 2-D ARRAY .
#include <stdio.h>
#include <limits.h>
int main()
{
    int max = INT_MIN, arr[4][3] = {{4, 3, 2}, {5, 1, 6}, {7, 9, 12}, {8, 10, 11}};
    int min = arr[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    printf("THE MAXIMUM ELEMENT AND MINIMUM ELEMENT IN THE GIVEN 2-D ARRAY is %d and %d :", max, min);
    return 0;
}