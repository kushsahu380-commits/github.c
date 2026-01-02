// TO check wheather the given array is the palindrome or not .
#include <stdio.h>
int main()
{
    int crush = 1, temp, old[9], arr[9] = {1,2,3,4,5,4,3,2,1};
    for (int i = 0; i < 9; i++)
    { // copy all the elements of arr to old.
        old[i] = arr[i];
    }
    // now old[5]= {1,2,3,4,5,4,3,2,1};
    for (int i = 0, j = 8; i < j; i++, j--)
    { // reverse the arr[5];
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    // now our array arr[9] is reversed .
    for (int i = 0; i <9; i++)
    { // Here we check wheather elements of reversed arr is equal to old .
        if (arr[i] != old[i])
        {
            crush = 0;
            break;
        }
    }
    if (crush == 1)
    {
        printf(" The given array is the palindrome :");
    }
    else
    {
        printf(" The given array is not palindrome");
    }
    return 0;
}