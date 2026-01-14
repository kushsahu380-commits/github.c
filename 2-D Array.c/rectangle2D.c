// GIVEN A MATRIX 'a' OF DIMENSION n cross m AND TWO COORDINATES (l1,r1) and (l2,r2) , RETURN THE SUM OF RECTANGLE FROM (l1,r1) to (l2,r2).
#include <stdio.h>
int main()
{
    int sum = 0, n, m;
    printf("ENTER n :");
    scanf("%d", &n);
    printf("ENTER m :");
    scanf("%d", &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the element of arr[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < m; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}