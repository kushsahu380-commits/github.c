// Print the first nth fabonacci series ..
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, a, b, c;
    a = 0;
    b = 1;
    printf("Enter the first nth number:");
    scanf("\n%d", &n);
    printf("%d\t%d", a, b);
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        printf("\t%d", c);
        a = b;
        b = c;
    }
    return 0;
}