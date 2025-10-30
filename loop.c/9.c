// write a program to print AP--3,9,15,21.....upto n.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n:");
    scanf("%d", &n);
    for (int i = 3; i <= n; i = i + 6)
    {
        printf("%d\n", i);
    }
    return 0;
}