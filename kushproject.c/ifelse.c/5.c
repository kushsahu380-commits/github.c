//write a program to find the largest of two numbers.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    if(x>y){
        printf("%d is largest",x);
    }
    else
    {
        printf("%d is greater",y);
    }
    return 0;
}