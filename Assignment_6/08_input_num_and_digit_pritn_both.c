// Write a program to input a number from the user and also input a digit.
// Append a digit in the number and print the resulting number.
// (Example - number=234 and digit=9 then the resulting number is 2349)

#include <stdio.h>
int main()
{
    int num, digit;
    printf("Enter a Number Please :");
    scanf("%d", &num);

    printf("Enter a Digit Please :");
    scanf("%d", &digit);

    num = (num * 10) + digit; // num=234*10=2340+5=2345

    printf("Number and append digit is = %d", num);

    return 0;
}