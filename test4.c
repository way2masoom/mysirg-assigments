// Program to calculate the sum of 2 numbers
#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y, sum;
    printf("Enter the first NUM\t :");
    scanf("%d", &x);

    printf("Enter the Second NUM\t :");
    scanf("%d", &y);
    sum = x + y;
    printf("The Sum of 2 Number is = %d", sum);

    getch();
}