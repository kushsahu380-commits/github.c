// print the given pattern .
//   *   *
//    * *
//     *
//    * *
//   *   *
#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 5)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (j == 1 || j == 5)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else if (i % 2 == 0)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (j % 2 == 0)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
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
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}