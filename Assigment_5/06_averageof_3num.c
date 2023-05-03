// Write a program to calculate the average of three numbers
#include <stdio.h>
#include <conio.h>

int main()
{
    float num1, num2, num3, avg; // avg=Average

    // tacking data from User
    printf("Enter the First Number: \t");
    scanf("%f", &num1);

    printf("Enter the Second Number:\t");
    scanf("%f", &num2);

    printf("Enter the Second Number:\t");
    scanf("%f", &num3);

    // Calculation
    avg = (num1 + num2 + num3) / 3;
    printf("The Average of Three Number is =%f", avg);

    getch();
    return 0;
}