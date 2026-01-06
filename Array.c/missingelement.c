// Given an array containing an element from 1 to 100 except one element in this range is missing.Find the missing element .
#include <stdio.h>
int main()
{
    int missing, sum1 = 0, sum2 = 0, arr[99];
    int miss = 55;
    for (int i = 0, j = 1; i <= 98;)
    {
        if (j == miss)
        {
            j++;
        }
        arr[i++] = j++;
    }
    for (int i = 0; i <= 98; i++)
    {
        sum1 = sum1 + arr[i];
    }
    for (int i = 1; i <= 100; i++)
    {
        sum2 = sum2 + i;
    }
    missing = sum2 - sum1;
    printf("%d", missing);
    return 0;
}