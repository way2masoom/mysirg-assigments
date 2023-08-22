// Write a program to calculate the square of a given number. formula(num*num)
#include <stdio.h>
#include <conio.h>

int main()
{
    // Deceleration variables
    int num, sqr;

    printf("Enter the number to find the square:");
    scanf("%d", &num);

    sqr = num * num;
    printf("The Square of Given number is =%d", sqr);

    getch();
    return 0;
}
