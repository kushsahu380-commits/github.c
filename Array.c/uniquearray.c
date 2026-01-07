// Find a unique number in the given array where all the elements are repeating twice with one value being unique .
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[9] = {1, 2, 5, 4, 5, 8, 1, 2, 4};
    for (int i = 0; i <= 8; i++)
    {
        bool flag = false;
        for (int j = 0; j <= 8; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("Unique number in the given array = %d ", arr[i]);
        }
    }
    return 0;
}