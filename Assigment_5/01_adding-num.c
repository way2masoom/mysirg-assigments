// Write a program to calculate the sum of two numbers.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, sum; // Deceleration The variable

    // tacking data from User
    printf("Enter the First Number: \t");
    scanf("%d", &num1);

    printf("Enter the Second Number:\t");
    scanf("%d", &num2);

    // Calculation
    sum = num1 + num2;
    printf("The sum of Two number is = %d \t", sum);

    getch();
    return 0;
}