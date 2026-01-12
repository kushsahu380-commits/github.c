#include <stdio.h>
int main()
{
    int arr[4][2] = {{1180, 87}, {1181, 98}, {1183, 99}, {1184, 100}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                printf("ROLL NUMBER = %d ", arr[i][j]);
            }
            else
            {
                printf("STUDENT MARKS = %d", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}