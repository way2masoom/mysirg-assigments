// 	Write a program to calculate the profit percentage upon selling a product.
// Cost price and selling price are given by the user. Formula (sellingPrice - costPrice) / sellingPrice * 100;

#include <stdio.h>
#include <conio.h>

int main()
{
    // Variable Deceleration
    float costPrice, sellingPrice, profit;

    // Tacking data from user
    printf("Enter the Selling Price:");
    scanf("%f", &sellingPrice);

    printf("Enter the Cost Price:");
    scanf("%f", &costPrice);

    // Calculation to Find Profit
    profit = (sellingPrice - costPrice) / sellingPrice * 100;

    printf("The profit Amount is = %f", profit);

    getch();
    return 0;
}
