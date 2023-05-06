// Write a program to find the nature of roots of a quadratic equation.
// Formula ax2 + bx + c = 0

#include <stdio.h>
#include <math.h>
int main()
{
    // Variable Declaration
    float a, b, c, r1, r2, d;
    printf("Enter the Value of A B C: \n");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c; // from formula (ax2 + bx + c)

    // condition for real and different roots
    if (d > 0)
    {
        // r1=root one (−b + √(b2 − 4ac)]/2a)
        r1 = (-b + sqrt(d)) / (2 * a); // where d= b * b - 4 * a * c;from upper deceleration

        // r2=root one (−b - √(b2 − 4ac)]/2a)
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The real roots = %f %f", r1, r2);
    }
    // condition for real and equal roots
    else if (d == 0)
    {
        r1 = -b / (2 * a);
        r2 = -b / (2 * a);
        printf("The roots are Equal= %f %f", r1, r2);
    }
    // if roots are not real
    else
    {
        printf("Roots are imaginary");
    }
    return 0;
}