// Maze path.
#include <stdio.h>
int maze(int cr, int cc, int er, int ec)
{
    int rightways = 0;
    int downways = 0;
    if (cr == er && cc == ec)
    {
        return 1;
    }
    if (cr == er)
    {
        rightways += maze(cr, cc + 1, er, ec);
    }
    if (cc == ec)
    {
        downways += maze(cr + 1, cc, er, ec);
    }
    if (cc < ec && cr < er)
    {
        rightways += maze(cr, cc + 1, er, ec);
        downways += maze(cr + 1, cc, er, ec);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int n, m;
    printf("Enter the no of rows of maze path:");
    scanf("%d", &n);
    printf("Enter the no of coloumn of maze path:");
    scanf("%d", &m);
    int noofways = maze(1, 1, n, m);
    printf("No of ways =%d", noofways);
    return 0;
}