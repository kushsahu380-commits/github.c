// To find the area and perimeter of a trapezoid
#include <stdio.h>
int main()
{
    int a, b, c, d, h;
    // a and b are two parallel sides, h is height, c and d are other two sides (all are in centimeters)
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    printf("Enter d: ");
    scanf("%d", &d);
    printf("Enter h: ");
    scanf("%d", &h);
    int Area = (a + b) * h / 2;
    printf("Area of trapezoid is %d\n", Area);
    int Perimeter = a + b + c + d;
    printf("Perimeter of trapezoid is %d\n", Perimeter);
    return 0;
}