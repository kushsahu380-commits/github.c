#include <stdio.h>
int main()
{
    int p = 4, q = 5, r;
    r = p-- - --q + ++p + q++;
    printf("%d%d%d", p, q, r);
    return 0;
}