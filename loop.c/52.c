// Print the pattern .
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5
#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 1)
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c ", 'A' + j - 1);
            }
        }
        printf("\n");
    }
    return 0;
}