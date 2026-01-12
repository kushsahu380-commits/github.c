// WRITE A PROGRAM TO ADD TWO MATRICES .
#include <stdio.h>
int main()
{
    int add[5][2], arr[5][2], brr[5][2];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" ENTER THE ELEMENT OF THE ARRAY arr[%d][%d] :", i, j);
            scanf("%d", &arr[i][j]);
            printf(" ENTER THE ELEMENT OF THE ARRAY brr[%d][%d] :", i, j);
            scanf("%d", &brr[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            add[i][j] = arr[i][j] + brr[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }
    return 0;
}