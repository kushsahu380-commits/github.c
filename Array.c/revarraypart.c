// write a program to reverse the part of an array .
#include <stdio.h>
void partrev(int arr[])
{
    int temp;
    for (int i = 2, j = 5; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    partrev(arr);
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}