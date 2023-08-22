// Write a program to find middle digit of a given three digit number
#include <stdio.h>
int main()
{

    int num, middleDigit;
    printf("Enter three Numbers:");
    scanf("%d", &num);

    // To find Middle digit of given number
    middleDigit = (num / 10) % 10; // middle = (123/10)=12%10=2

    printf("Middle Digit is =%d", middleDigit);

    return 0;
}