// Find the area and perimeter of a rectangle.
#include <stdio.h>
int main()
{
    int length, breadth;
    printf("Enter length");
    scanf("%d", &length);
    printf("Enter breadth");
    scanf("%d", &breadth);
    printf("\nArea of the rectangle = %d", length * breadth);
    printf("\nPerimeter of the rectangle = %d", 2 * (length + breadth));
    return 0;
}