// Write a program to calculate sum of first N Odd natural numbers
#include <stdio.h>
int main()
{
    int n, i; // N is entered by user and I is for loop
    int odd = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    // Condition to calculate sum of first N odd natural numbers
    for (i = 1; i <= n; i++)
    {
        odd = odd + i * 2 - 1; // To find the sum of Odd NUmber
    }
    printf("First N Odd Natural  Number= %d \n", odd);

    return 0;
}
