#include <stdio.h>
int main()
{
    int i = 10, j = 5, k;
    k = i-- - --j + ++i - j--;
    printf("%d,%d,%d", i, j, k);
    return 0;
}