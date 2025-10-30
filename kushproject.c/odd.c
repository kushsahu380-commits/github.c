#include<stdio.h>
int main()
{
int x;
printf("Enter x");
scanf("%d",&x);
printf("%d",x % 2 == 1);
//if x is a odd number then the output should be one(1) otherwise zero(0).
return 0;
}