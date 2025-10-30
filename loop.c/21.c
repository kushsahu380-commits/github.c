// Display this GP -100,50,25,....upto "n" terms.
#include <stdio.h>
int main()
{
    float n, x;
    x = 100;
    printf("Enter n:");
    scanf("\n%f", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\n%f", x);
        x = (float)x / 2;
    }
    return 0;
}