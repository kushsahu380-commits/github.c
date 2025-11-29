// Print 1 to n.
#include <stdio.h>
void increaseupto(int x, int n)
{
    if (n < x)
    {
        return;
    }
    printf("%d\n", x);
    increaseupto(x + 1, n);
    return;
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    increaseupto(1, n);
    return 0;
}