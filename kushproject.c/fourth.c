// check if a number is divided by 2 or not
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a");
    scanf("%d", &a);
    printf("%d", a % 2 == 0);
    // if a is a divisible of two then the output should be one
    return 0;
}