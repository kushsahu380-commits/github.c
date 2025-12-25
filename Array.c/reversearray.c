#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("\n Enter the index number %d : ", i);
        scanf("%d", &arr[i]);
    }
    // The above loop is used to take input from the user 
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}