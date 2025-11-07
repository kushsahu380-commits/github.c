// print the pattern .
//  1234
//  123
//  12
//  1
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        n--;
        printf("\n");
    }
    return 0;
}