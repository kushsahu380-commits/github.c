#include <stdio.h>
int main()
{
    int a = 5, b = 3, c;
    c = a++ + ++b + --a + b--;
    printf("%d%d%d", a, b, c);
    return 0;
}