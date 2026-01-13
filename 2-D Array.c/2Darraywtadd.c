// WRITE A PROGRAM TO ADD TWO MATRICES WITHOUT USING ANOTHER MATRIX .
#include <stdio.h>
int main()
{
    int temp, arr[5][2], brr[5][2];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("ENTER THE ELEMENT OF AN ARRAY arr[%d[%d]", i, j);
            scanf("%d", &arr[i][j]);
            printf("ENTER THE ELEMENT OF AN ARRAY brr[%d[%d]", i, j);
            scanf("%d", &brr[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            temp = arr[i][j] + brr[i][j];
            printf("%d ", temp);
        }
        printf("\n");
    }
    return 0;
}