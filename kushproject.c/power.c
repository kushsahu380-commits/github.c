// To find the square of a given number .
#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    printf("Enter x");
    scanf("%d", &x);
    printf("\nSquare of given number is =%f", (float)pow(x, 2));
    return 0;
}