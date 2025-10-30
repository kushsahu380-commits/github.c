//write a program to check whether a character is a digit or alphabet
#include<stdio.h> 
int main()
{
    char ch;
    printf("Enter ch");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        printf("alphabet");
    }
    else if(ch>='0'&& ch<='9')
    {
        printf("digit");
    }
    else{
        printf("special variable");
    }
    return 0;
}