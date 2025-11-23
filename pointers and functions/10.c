#include <stdio.h>
int main()
{
    for (int i = 0; i <= 6; i++)
    {
        for (int j = 0; j <= 6 - i; j++)
        {
            printf(" ");
        }
        int first = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", first);
            first = first * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}