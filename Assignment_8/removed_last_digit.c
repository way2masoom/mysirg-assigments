// WAP  how to remove last digit
#include <stdio.h>
int main()
{
    int num, last_digit;
    printf("Enter the Number:");
    scanf("%d", &num);

    // To remove last digit
    // when we divided any num with 10 we get first 2 number only and LAST digit will remove
    //[ex = 234/10] then only 23 will display
    last_digit = num / 10;

    printf("last Digit is =%d", last_digit);

    return 0;
}