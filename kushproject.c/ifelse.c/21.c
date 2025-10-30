// Take a positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a positive integer :");
    scanf("%d", &x);
    if ((x % 5 == 0 || x % 3 == 0) && x % 15 != 0){
        printf("it is divisible by 5 or 3 but not divisible by 15");
    }
    else{
        printf("Condition is not satisfied ");
    }
        return 0;
}