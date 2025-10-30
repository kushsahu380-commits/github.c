// Take input percentage of a student and print the grade according to marks.
#include <stdio.h>
int main()
{
    float percent;
    printf("Enter percentage of the student:");
    scanf("%f", &percent);
    if (percent > 90 && percent <= 100)
    {
        printf("Excellent");
    }
    else if (percent > 80 && percent <= 90)
    {
        printf("Very Good");
    }
    else if (percent > 70 && percent <= 80)
    {
        printf("Good");
    }
    else if (percent > 60 && percent <= 70)
    {
        printf("Can do better");
    }
    else if (percent > 50 && percent <= 60)
    {
        printf("Average");
    }
    else if (percent > 40 && percent <= 50)
    {
        printf("Below Average");
    }
    else if (percent < 40)
    {
        printf("Fail");
    }
    else
    {
        printf("Mat padho");
    }
    return 0;
}