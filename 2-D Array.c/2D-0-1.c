// GIVEN A MATRIX HAVING 0-1 ONLY , FIND THE ROW WITH THE MAXIMUM NUMBER OF ONES .
#include <stdio.h>
#include <limits.h>
int main()
{
    int x, y;
    int i, j, arr[4][3];
    int maxcount = -1, rowindex = -1;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        int count = 0;
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxcount)
        {
            maxcount = count;
            rowindex = i;
        }
    }
    printf("%d", rowindex);
    return 0;
}