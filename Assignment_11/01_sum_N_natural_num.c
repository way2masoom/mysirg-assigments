// WAP to calculate the SUM of the first N natural number
#include <stdio.h>
int main()
{
    int num, i; // Initialization
    int sum = 0;
    printf("Enter a number upto which you want to sum:");
    scanf("%d", &num);

    // Checking the condition to calculate Sum of N numbers
    for (i = 1; i <= num; i++)
    {
        sum = sum + i; // To add the number
    }
    printf("Sum of the first %d natural numbers is %d\n", num, sum);

    return 0;
}