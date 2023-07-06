// Assume price of 1 USD is INR 76.23.
// Write a program to take the amount in INR and convert it into USD.

#include <stdio.h>
int main()
{
    float amount;
    float USD= 76.23;

    printf("Enter the amount in INR:");
    scanf("%f", &amount);
    
    amount=amount/USD;  

    printf("Amount in USD is = %.2f  ",amount);

    return 0;
}