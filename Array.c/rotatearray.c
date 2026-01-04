// Rotate the given array 'a' by k steps , where k is non-negative
// note: k can be greater then n as well where n is the size of array 'a'.
#include <stdio.h>
void reverse(int arr[], int si, int ei)
{
    int temp;
    for (int i = si, j = ei; i < j; i++, j--) // for reversing the whole array and specific part of an array .
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int k, n = 7, arr[7] = {1, 2, 3, 4, 5, 6, 7};
    printf("Enter no of steps :");
    scanf("%d", &k);
    k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}