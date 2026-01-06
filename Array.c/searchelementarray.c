// Given array and a number 'x'. Find out if x lies in the array or not , if yes then print the index .
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i, x, arr[5] = {1, 2, 3, 2, 5};
    printf("Enter the number :");
    scanf("%d", &x);
    bool flag = false;
    for (i = 0; i <= 4; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        printf("%d is present in the array at an index %d  : ", x, i);
    }
    else
    {
        printf("%d is not present in the array : ", x);
    }
    return 0;
}