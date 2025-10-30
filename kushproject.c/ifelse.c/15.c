// Write a program to input marks of 5 subjects and calculate percentage and grade.
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter marks of first subject:");
    scanf("%d", &a);
    printf("Enter marks of second subject");
    scanf("%d", &b);
    printf("Enter marks of third subject");
    scanf("%d", &c);
    printf("Enter marks of fourth subject");
    scanf("%d", &d);
    printf("Enter marks of fifth subject");
    scanf("%d", &e);
    int sum = a + b + c + d + e;
    float percent = (float)(sum * 100) / 500;
    printf("Percentage is %f\n", percent);
    if (percent >= 90)
    {
        printf("A grade\n");
    }
    else if (percent >= 80 && percent < 90)
    {
        printf("B grade\n");
    }
    else if (percent >= 70 && percent < 80)
    {
        printf("C grade\n");
    }
    else if (percent >= 60 && percent < 70)
    {
        printf("D grade\n");
    }
    else if (percent >= 40 && percent < 60)
    {
        printf("E grade\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}