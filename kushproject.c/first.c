#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    printf("Enter c ");
    scanf("%d", &c);
    int sum = a + b + c;
    printf("Sum is %d\n", sum);
    return 0;
}