// Given an array of marks of students ,if marks of any student is less than 35 print its roll number .[here roll number refers to the index number of an array]
#include <stdio.h>
int main()
{
    int stdmarks[10] = {23, 45, 67, 32, 86, 93, 100, 31, 28, 47};
    for (int i = 0; i <= 9; i++)
    {
        if (stdmarks[i] < 35)
        {
            printf("\n Roll number = %d", i);
        }
    }
    return 0;
}