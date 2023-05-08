//  Write a program to calculate sum of first N even natural numbers
#include <stdio.h>
int main()
{
    int n, i; // N is entered by user and I is for loop
    int even = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    // Condition to calculate sum of first N even natural numbers
    for (i = 1; i <= n; i++)
    {
        even = even + i * 2;
    }
    printf("First N EVEN Natural  Number=%d \n", even);

    return 0;
}
