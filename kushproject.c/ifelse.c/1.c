// Take positive integer input and tell if it is divisible by 5 or not.
#include <stdio.h>
int main()
{
    int z;
    printf("Enter z:\n");
    scanf("%d", &z);
    if (z % 5 == 0)
    {
        printf("yes it is divisible by 5 \n");
    }
    else
    {
        printf("no it is not divisible by 5\n");
    }
    return 0;
}