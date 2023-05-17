// Write a program to check whether a given number is a Prime number or not
#include <stdio.h>
int main()
{
    int num, i, prime = 0; // Variable deceleration

    // taking data from user
    printf("Enter a number :");
    scanf("%d", &num);

    // condition to check the given number is prime or not
    for (i = 1; i < num; i++)
    {
        if (num % 2)
        {
            printf("\nIt's a Prime Number %d", num);
        }
        else
        {
            printf("\nIt's NOT a Prime Number %d", num);
        }
    }
    return 0;
}