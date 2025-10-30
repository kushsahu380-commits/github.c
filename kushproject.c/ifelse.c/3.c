// Take integer input and print absolute value of the integer.
#include <stdio.h>
int main()
{
    int integer;
    printf("Enter integer:");
    scanf("%d", &integer);
    if (integer < 0)
    {
        integer = integer * (-1);
        printf("absolute value of integer =%d\n", integer);
    }
    else{
        printf("absolute value of integer =%d\n", integer);
    }
    return 0;
}
