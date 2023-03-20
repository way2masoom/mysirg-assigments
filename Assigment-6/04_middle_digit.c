// Write a program to find middle digit of a given three digit number
#include <stdio.h>
int main()
{

    int num,middleDigit;
    printf("Enter three Numbers:");
    scanf("%d", &num);

    // To find First digit of given number
    middleDigit= (num / 10)%10; // I will display Middle digit

    printf("First Digit is =%d",middleDigit);

    return 0;
}