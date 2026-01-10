#include <stdio.h>
int main()
{
    int r, c;
    printf("ENTER THE NUMBER OF ROWS IN OUR 2D ARRAY : ");
    scanf("%d", &r);
    printf("ENTER THE NUMBER OF COLUMNS IN OUR 2D ARRAY : ");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            printf("ENTER THE ELEMENT OF AN 2D ARRAY OF ROW %d AND COLOUMN %d : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}