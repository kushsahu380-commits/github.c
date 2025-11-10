// Print the pattern .
//  A B C D
//  A B C D
//  A B C D
//  A B C D
#include <stdio.h>
#include <conio.h>
int main()
{
    char A, B, C, D;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 65; j <= 68; j++)
        {
            printf("%c  ", j);
        }
        printf("\n");
    }
    return 0;
}