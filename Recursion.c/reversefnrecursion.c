// Reverse a number using function by recursion .
#include <stdio.h>
void reverse(int x)
{
    int y;
    if (x == 0)
    {
        return;
    }
    y = x % 10;
    printf("%d", y);
    reverse(x / 10);
    return;
}
int main()
{
    int x, y;
    printf("Enter the number :");
    scanf("%d", &x);
    reverse(x);
    return 0;
} 