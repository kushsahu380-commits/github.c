// print the given pattern.
//    *
//    *
//  *****
//    *
//    *
#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            for (int j = 1; j <= 5; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= 5; j++)
            {
                if (j == 3)
                {
                    printf("*");
                }
                    printf(" ");
                
            }
        }
        printf("\n");
    }
    return 0;
}