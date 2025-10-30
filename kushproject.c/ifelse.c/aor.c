#include <stdio.h>
int main()
{
    int length, breadth;
    printf("Enter length:");
    scanf("%d", &length);
    printf("Enter breadth:");
    scanf("%d", &breadth);
    int Area = length * breadth;
    int perimeter = 2 * (length + breadth);
    if (Area > perimeter)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}