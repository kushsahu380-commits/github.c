// TO find the area of a right angle triangle whose height and base is given in centimeters .
#include <stdio.h>
int main()
{
    int base, height;
    printf("Enter base");
    scanf("%d", &base);
    printf("Enter height");
    scanf("%d", &height);
    printf("\nArea of a right angle triangle = %f", (float)(base * height) / 2);
    return 0;
}