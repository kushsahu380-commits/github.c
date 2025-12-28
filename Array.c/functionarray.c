#include <stdio.h>
void swaap(int arr[])
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}
int main()
{
    int arr[2] = {2, 4};
    printf("%d , %d \n", arr[0], arr[1]);
    swaap(arr);
    printf("%d , %d \n", arr[0], arr[1]);
    return 0;
}