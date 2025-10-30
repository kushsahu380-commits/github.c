#include<stdio.h>
int main()
{
    int age;
    printf("Enter age");
    scanf("%d",&age);
    if(age>18){
        printf("adult\n");
        printf("you can vote\n");
    }
    else{
        printf("not adult\n");
        printf("you can't vote");
    }
    return 0;
}