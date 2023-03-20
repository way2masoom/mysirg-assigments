// WAP  to find last digit of a given number
#include <stdio.h>
int main()
{
    int num, last_digit;
    printf("Enter the Number:");
    scanf("%d", &num);
    // To find last digit of given number
    last_digit = num % 10; // Remender will disply [ex=123] then only 3 will disply
    printf("last Digit is =%d", last_digit);

    return 0;
}