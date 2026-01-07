// write a program to find a duplicate element from the given array of integers.
#include <stdio.h>
int main()
{
    int found = 0, arr[5] = {1, 2, 3, 1, 5};
    for (int i = 0; i <= 4; i++)
    {
        for (int j = i + 1; j <= 4; j++)
        {
            if (arr[i] == arr[j])
            {
                printf(" Duplicate element from the given array of integers is %d at an index %d :", arr[i], j);
                found = 1;
            }
        }
    }
    if (found == 0)
    {
        printf("No duplicate element has been found : ");
    }
    return 0;
}