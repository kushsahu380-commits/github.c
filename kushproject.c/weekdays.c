#include<stdio.h>
int main()
{
    int x;
    printf("Enter x");
    scanf("%d",&x);
    if(x>=10){
        printf("Monday\n");
    }else if (x>5 && x<9){
        printf("Tuesday\n");
    }else if (x>15){
        printf("wednesday\n");
    }
        else{
            printf("Thank you\n");
        }
    return 0;
}