#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    int c=pow(a,b);
    printf("c is %d\n",c);
    return 0;
}