// Count the number of elements in the given array greater then a given number x .
#include <stdio.h>
int main()
{
    int x, count = 0, arr[5] = {2, 4, 6, 8, 10};
    printf("Enter the number :");
    scanf("%d", &x);
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] > x)
        {
            count += 1;
        }
    }
    printf("The number of elements in the given array greater then a given number %d = %d", x, count);
    return 0;
}