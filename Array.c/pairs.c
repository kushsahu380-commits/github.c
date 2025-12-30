// Find the total no of pairs in the array whose sum is equal to the given value of x .if the same number is not repeat(a,a).
#include <stdio.h>
int main()
{
    int x, sum, count = 0, arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("Enter the number :");
    scanf("%d", &x);
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            sum = arr[i] + arr[j];
            if (sum == x)
            {
                count ++;
            }
        }
    }
    printf("The total no of pairs in the array whose sum is equal to the given value of x = %d ", count);
    return 0;
}