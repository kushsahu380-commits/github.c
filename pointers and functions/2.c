#include <stdio.h>
void england()
{
    printf("I am from england \n");
    return;
}
void india()
{
    printf("I am from india \n");
    england();
    return;
}
void australia()
{
    printf("I am from australia\n");
    india();
    return;
}
int main()
{
    australia();
    return 0;
}