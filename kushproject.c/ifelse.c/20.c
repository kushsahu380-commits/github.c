//write a program to check if the transaction is valid and calculate how many 500,200 and 100 notes will be dispensed.
#include<stdio.h>
int main(){
    int amount,balance;
    printf("\nEnter the withdrawl amount");
    scanf("%d",&amount);
    printf("\nEnter total bank balance");
    scanf("%d",&balance);
    if(amount<balance){
        printf("\nTransaction is valid");
    }
    else if(amount %100 == 0){
        
        printf("");
    }
    return 0;
}