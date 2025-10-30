#include <stdio.h>
int main()
{
    int x;
    printf("Enter x:");
    scanf("%d", &x);
    if (!(x > 9) && !(x < 19))
    {
        printf("theek hai");
    }
    else
    {
        printf("tum se naa ho payega");
    }
    return 0;
}