// Given an array of integers , change the value of all the odd index element to its second multiple and increment all even indexed value by 10.
#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i <= 7; i++)
    {
        if (i % 2 == 1)
        {
            arr[i] *= 2;
            // printf("%d ", arr[i]);
        }
        else
        {
            arr[i] += 10;
            // printf("%d ", arr[i]);
        }
    }
    for (int i = 0; i <= 7; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}