// Copy the content of one array into another array in reverse order .
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, brr[5];
    for (int i = 0; i <= 4; i++)
    {
        brr[i] = arr[4 - i];
    }
    // now brr[5]={5,4,3,2,1};
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", brr[i]);
    }
    return 0;
}