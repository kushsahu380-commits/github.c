// print the pattern .
//****
//***
//**
//*
#include <stdio.h>
int main()
{
    int n;
    n = 4;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        n--;
        printf("\n");
    }
    return 0;
}