// WAP  to find First digit of a given number
#include <stdio.h>
int main()
{
    int num, a, b, c;
    printf("Enter the Number:");
    scanf("%d", &num);

    // To find First digit of given number
    a = num / 100; // When we divied any number with 100 it will display the first digit

    printf("First Digit is =%d", a);

    return 0;
}