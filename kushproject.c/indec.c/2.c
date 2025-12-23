#include <stdio.h>
int main()
{
    int x = 2, y = 3, z;
    z = ++x * y-- + x-- * ++y;
    printf("%d%d%d", x, y, z);
    return 0;
}