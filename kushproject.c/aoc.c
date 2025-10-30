#include <stdio.h>
#include <math.h>
int main()
{
    float radius;
    printf("Enter radius of the circle");
    // radius of circle is in the cm(centimeters)
    scanf("%f", &radius);
    printf("area of the circle is %f", 3.14 * pow(radius, 2));
    return 0;
}