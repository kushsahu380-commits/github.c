#include <stdio.h>
int palindrome(int x, int z)
{
    int y;
    if (x == 0)
    {
        return z;
    }
    y = x % 10;
    return palindrome(x / 10, z * 10 + y);
}
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d", &x);
    int original = x;
    int z = palindrome(x, 0);
    if (original == z)
    {
        printf("%d is the palindrome number :", original);
    }
    else
    {
        printf("%d is not a palindrome number :", original);
    }
    return 0;
}