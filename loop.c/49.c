// print the pattern.
// 1
// 13
// 135
// 1357
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 7; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 1)
                {
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}