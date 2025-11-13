// //print the pattern .
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include <stdio.h>
#include <conio.h>
int main()
{
    int j;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}