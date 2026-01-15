// WRITE A PROGRAM TO TRANSPOSE OF GIVEN MATRIX ENTERED BY THE USER .
#include <stdio.h>
int main()
{
    int r, c;
    printf("ENTER THE ROW :");
    scanf("%d", &r);
    printf("ENTER THE COLOUMN :");
    scanf("%d", &c);
    int arr[r][c], brr[c][r];
    for (int i = 0; i < r; i++) // TO TAKE INPUT ELEMENTS IN OUR MATRIX .
    {
        for (int j = 0; j < c; j++)
        {
            printf("ENTER THE ELEMENT IF MATRIX OF arr[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) // TO TRANSPOSE OUR MATRIX .
        {
            brr[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}