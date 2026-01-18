// WRITE A PROGRAM TO ROTATE A SQUARE  MATRIX 90 DEGREE .
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE n:");
    scanf("%d", &n);
    int arr[n][n], temp1, temp2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("ENTER THE ELEMENT OF arr[%d][%d] :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                temp1 = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int j = 0, k = n - 1;
        while (j < k)
        {
            temp2 = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp2;
            j++;
            k--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}