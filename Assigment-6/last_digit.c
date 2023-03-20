// WAP  to find last digit of a given number
#include <stdio.h>
int main()
{
    int num1,num2,num3,lastDigit;
    printf("Enter the Number:");
    scanf("%d", &num1);

    printf("Enter the Number:");
    scanf("%d", &num2);

    printf("Enter the Number:");
    scanf("%d", &num3);

    // To find last digit of given number
    lastDigit = num1 % 10; // Remender will disply [ex=123] then only 3 will disply

    printf("last Digit is =%d", lastDigit);

    return 0;
}