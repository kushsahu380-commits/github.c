// Write the program to compute greatest common divisor of two given numbers.
#include <stdio.h>
int Minimum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int gcf(int a, int b)
{
     int hcf;
    for (int i = 1; i <= Minimum(a, b); i++)
    {
       
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
int main()
{
    int a, b;
    printf("Enter the first number:\n ");
    scanf("%d", &a);
    printf("Enter the second number:\n ");
    scanf("%d", &b);
    int x = gcf(a, b);
    printf("The HCF of %d and %d = %d ", a, b, x);
    return 0;
}