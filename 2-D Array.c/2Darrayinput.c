#include <stdio.h>
int main()
{
    int arr[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("ENTER THE ELEMENT OF AN 2D ARRAY OF ROW %d AND COLOUMN %d : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}