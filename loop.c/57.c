// 1
// 01
// 101
// 0101
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    for (int i = 1; i <= 4; i++)
    {
        if (i % 2 == 1)
        {
            num = 1;
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", num);
                num = 1 - num;
            }
        }
        else
        {
            num = 0;
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", num);
                num = 1 - num;
            }
        }
        printf("\n");
    }
    return 0;
}