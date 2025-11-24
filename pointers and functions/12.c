#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number :\n");
    scanf("%d", &a);
    printf("Enter the second number :\n");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Value of a after swapping=%d\n", a);
    printf("Value of b after swapping=%d\n", b);
    return 0;
}