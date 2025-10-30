//write a program to find whether a given year is a century year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year");
    scanf("%d",&year);
    if(year%100==0){
        printf("It is a century year");
    }
    else{
        printf("It is not a century year");
    }
    return 0;
}