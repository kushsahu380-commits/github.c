// write a program of any number 'n'.Which a user will input.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    int y = x * 10;
    for (int i = x; i <= y; i = i + x)
    {
        printf("%d\n", i);
    }
    return 0;
}