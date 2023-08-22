// Write a program to calculate sum of cubes of first N natural numbers
#include <stdio.h>
int main()
{
    int i, num;
    int sum = 0;

    printf("Enter a number upto which you want to sum:");
    scanf("%d", &num);

    // Checking the condition to calculate Sum of N numbers
    for (i = 1; i <= num; i++)
    {
        sum = sum + i * i * i; // To get sum of Cube of Number
    }
    printf("Sum of the first %d natural numbers is %d\n", num, sum);

    return 0;
}