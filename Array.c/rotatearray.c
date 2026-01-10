// Rotate the given array 'a' by k steps , where k is non-negative
// note: k can be greater then n as well where n is the size of array 'a'.
#include <stdio.h>
void rotate(int arr[], int fi, int li)
{
    int temp;
    for (int i = fi, j = li; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j]; // to swaap the elements of our array .
        arr[j] = temp;
    }
    return;
}
int main()
{
    int n, k;
    printf("NO OF TIMES ARRAY WILL ROTATE : ");
    scanf("%d", &k);
    printf("ENTER THE SIZE OF ARRAY : "); // array ka size define ho gaya .
    scanf("%d", &n);
    int arr[n];
    k = k % n;
    for (int i = 0; i <= n - 1; i++)
    {
        printf("ENTER THE ELEMENT OF AN ARRAY FOR INDEX %d ", i);
        scanf("%d", &arr[i]); // To fill the elements in the array .
    }
    rotate(arr, 0, n - 1);
    rotate(arr, 0, k - 1);
    rotate(arr, k, n - 1);
    printf("AFTER ROTATING THE ARRAY %d TIMES : ", k);
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]); // TO PRINT OUR ROTATED ARRAY .
    }
    return 0;
}