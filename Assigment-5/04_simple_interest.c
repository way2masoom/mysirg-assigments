// Write a program to calculate the simple interest formula(Simple Interest = Principal * Rate * Time / 100)
#include <stdio.h>
#include <conio.h>

int main()
{
    float p, r, t, si; // P=principle,R=Rate and T=Time

    // Taking Data from user
    printf("Enter the Principle Amount=");
    scanf("%f", &p);

    printf("Enter the Rate Amount=");
    scanf("%f", &r);

    printf("Enter the Time Taken=");
    scanf("%f", &t);

    // Calculation
    si = (p * r * t) / 100;

    printf("The Simple Interest is =%f", si);

    getch();
    return 0;
}