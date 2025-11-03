// To check wheater the number is palindrome.
#include <stdio.h>
int main()
{
    int x, y, rev, original;
    rev = 0;
    printf("Enter the number");
    scanf("%d", &x);
    original = x;
    while (x != 0)
    {
        y = x % 10;
        rev = rev * 10 + y;
        x = x / 10;
    }
    if (original == rev)
    {
        printf("%d is the palindrome", original);
    }
    else
    {
        printf("%d is not the palindrome", original);
    }
    return 0;
}