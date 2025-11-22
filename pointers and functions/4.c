#include <stdio.h>

int cube(int a)
{
    return a * a * a;
}
int main()
{
    int a;
    printf("Enter the number :\n");
    scanf("%d", &a);
    int b = cube(a);
    printf("%d", b);
    return 0;
}