// Write a program to reverse the array without using any extra array .
#include <stdio.h>
void swaap(int arr[])
{
    int i = 0, j = 6, temp;
    while (i <= j)
    {
        temp = arr[i];
        arr[i] = arr[j]; // swaaping inside while loop .
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    swaap(arr);
    printf("REVERSED ARRAY:");
    for (int k = 0; k <= 6; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}