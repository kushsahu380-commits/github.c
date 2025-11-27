#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a, b;
    a = 5;
    b = 3;
    swap(&a, &b);
    printf("a=%d\n", a);
    printf("b=%d", b);
    return 0;
}