#include <stdio.h>
int main()
{
    int m = 3, n = 4, o;
    o = ++m + n++ - --n + m++;
    printf("%d%d%d", n, m, o);
    return 0;
}