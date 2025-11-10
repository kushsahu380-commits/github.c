// Print the pattern .
// A
// A B
// A B C
// A B C D
#include <stdio.h>
#include <conio.h>
int main()
{
    char A, B, C, D;
    for (int i = 65; i <= 68; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}