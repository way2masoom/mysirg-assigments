// Explore following format specifiers on
// internet - %i, %g, %lf

//
#include <stdio.h>
#include <conio.h>

int main()
{
    // For Signed Integer format specifier : %d, %i
    int x = 45, y = 90;
    printf("Signed Integer format specifier:\t  %d \n", x);
    printf("Signed Integer format specifier: \t %i \n", y);

    // The -10 value is converted into it's positive
    // equivalent by %u
    printf("The -10 value is converted into it's positive equivalent by: \t %u\n", -10);
    printf("This print the given value : \t %u \n", 10);

    // Floating-point format specifier : %f, %e or %E
    float num1 = 12.67;
    printf("Floating-point format specifier: \t %f \n", num1);
    printf(" Floating-point format specifier: \t %e \n", num1);

    // Double floating - point number : % lf
    double num2 = 0.0;
    scanf("Double floating: \t %lf", &num2); // input is 45.65
    printf("Double floating: \t %lf\n", num2);

    // Unsigned Octal number for integer : %o
    int num3 = 67;
    printf("Unsigned Octal number for integer: \t %o \n", num3);

    // Unsigned Hexadecimal for integer: %x, %X
    int num4 = 15;
    printf("Unsigned Hexadecimal for integer: \t %x \n", num4);

    // String printing: %s
    char strType[] = "Learning C with MySirG";
    printf("String printing: \t %s\n", strType);

    // Address Printing : % p
    int num5 = 10;
    printf("The Memory Address of a: \t  %p \n", (void *)&num5);

    getch();
    return 0;
}