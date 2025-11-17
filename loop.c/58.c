// print the pattern.
//   *
//  **
// ***
//****
#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        if (i == 1)
        {
            printf("   ");
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else if (i == 2)
        {
            printf("  ");
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else if (i == 3)
        {
            printf(" ");
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}