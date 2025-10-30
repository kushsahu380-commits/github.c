//write a program to find largest among three numbers .
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    printf("Enter c");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greater",a);
    }
    
    else if(b>a && b>c){
        printf("%d is greater",b);//wil---Bohot saare else if ka use nahi karna hai (try to do short)aur 
    }
    
    else if(c>a && c>b){
        printf("%d is greater",c);
    }
    else{
        printf("tumhara kutch nai hoga");
    }
    return 0;
}