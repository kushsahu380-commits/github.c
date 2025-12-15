// Maze path 2.
#include <stdio.h>
int maze(int n, int m)
{
    int rightways = 0;
    int downways = 0;
    if (n == 1 && m == 1)
    {
        return 1;
    }
    if (n == 1)
    {
        rightways += maze(n, m - 1);
    }
    if (m == 1)
    {
        downways += maze(n - 1, m);
    }
    if (n > 1 && m > 1)
    {
        rightways += maze(n, m - 1);
        downways += maze(n - 1, m);
    }
    int Totalways = rightways + downways;
    return Totalways;
}
int main()
{
    int n, m;
    printf("Enter the no of rows of maze path:");
    scanf("%d", &n);
    printf("Enter the no of coloumn of maze path:");
    scanf("%d", &m);
    int noofways = maze(n, m);
    printf("No of ways =%d", noofways);
    return 0;
}