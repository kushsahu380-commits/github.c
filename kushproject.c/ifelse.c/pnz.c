//write a program to check whether the number is positive,negative or zero.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    if(x>0){
        printf("Positive");
    }
    else if(x<0){
        printf("Negative");
    }
    else {
        printf("Zero");
    }
    return 0;
    }