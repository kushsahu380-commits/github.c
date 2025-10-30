// Write a program to print AP --1,3,5,7,9,......upto n.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 2)
    {
        printf("%d\n", i);
    }
    return 0;
}