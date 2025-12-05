// Print all the numbers divisible from 3 from 1 to n .
#include <stdio.h>
void divisible(int n, int i)
{
    if (i > n)
    {
        return;
    }
    if (i % 3 == 0)
    {
        printf("%d\n", i);
    }
    divisible(n, i + 1);
    return;
}
int main()
{
    int n;
    printf("Enter the n:");
    scanf("%d", &n);
    divisible(n, 1);
    return 0;
}