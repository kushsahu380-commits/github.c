// FIND THE SUM OF GIVEN MATRIX OF ORDER n cross m .
#include <stdio.h>
int main()
{
    int sum = 0, n, m;
    printf("ENTER n : ");
    scanf("%d", &n);
    printf("ENTER m : ");
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("ENTER THE ELEMENT OF ARRAY arr[%d][%d] :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("NOW OUR ARRAY IS : ");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("THE SUM OF GIVEN MATRIX OF ORDER %d cross %d is %d ", n, m, sum);
    return 0;
}