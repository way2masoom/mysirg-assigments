// WAP  to find First digit of a given three Number
#include <stdio.h>
int main()
{
    int num,firstDigit;
    printf("Enter three Numbers:");
    scanf("%d", &num);

    // To find First digit of given number
    firstDigit= num / 100; // When we divide any number with 100 it will display the first digit

    printf("First Digit is =%d",firstDigit);

    return 0;
}