//   *
//  ***
// *****
//*******
#include <stdio.h>
#include <conio.h>
int main()
{
    int j = 1;
    for (int i = 1; i <= 7; i++)
    {
        for (j = 1; j <= (7 - i) / 2; j++)
        {
            printf(" ");
        }
        if (i % 2 == 1)
        {
            for (int k = 1; k <= i; k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}