// WRITE A PROGRAM TO PRINT THE ROW NUMBER HAVING THE MAXIMUM SUM IN A GIVEN MATRIX .
#include <stdio.h>
#include <limits.h>
int main()
{
    int r0, r1, r2, r3, r4, maxsum = 0, arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            maxsum += arr[i][j];
            if (i == 0 && j == 4)
            {
                r0 = maxsum;
            }
            if (i == 1 && j == 4)
            {
                r1 = maxsum;
            }
            if (i == 2 && j == 4)
            {
                r2 = maxsum;
            }
            if (i == 3 && j == 4)
            {
                r3 = maxsum;
            }
            if (i == 4 && j == 4)
            {
                r4 = maxsum;
            }
        }
        maxsum = 0;
    }
    int max = INT_MIN, brr[5] = {r0, r1, r2, r3, r4};
    for (int i = 0; i < 5; i++)
    {
        if (max < brr[i])
        {
            max = brr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }
        if (sum == max)
        {
            printf("THE ROW NUMBER HAVING THE MAXIMUM SUM IN A GIVEN MATRIX = %d", i);
        }
    }
    return 0;
}