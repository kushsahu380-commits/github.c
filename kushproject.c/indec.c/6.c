#include <stdio.h>
int main()
{
    int x = 3, y = 4, z = 5;
    x = ++x + y-- + --z;
    y = --y + ++z - x--;
    printf("%d,%d,%d", x, y, z);
    return 0;
}