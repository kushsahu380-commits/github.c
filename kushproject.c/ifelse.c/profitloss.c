#include <stdio.h>
int main()
{
    int costprice, sellingprice; // prices are in rupees.
    printf("Enter costprice:");
    scanf("%d", &costprice);
    printf("Enter sellingprice:");
    scanf("%d", &sellingprice);
    if (sellingprice > costprice)
    {
        printf("Profit = %d\n", (sellingprice - costprice));
    }
    else if(sellingprice < costprice) 
    {
    printf("Loss = %d\n", (costprice - sellingprice));
    }
    else if(sellingprice == costprice)
    {
        printf("Break-Even");
    }
    return 0;
}