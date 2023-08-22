// Write a program to check whether a given number
// is divisible by 3 and divisible by 2

#include <stdio.h>
int main()
{
    int num;
    printf("\n Enter a number to check whether it is Divisible By 3 & 2 OR NOT:");
    scanf("%d", &num);

    // condition to check number is divisible by 3 & 2 or not

    if ((num % 3 == 0) && (num % 2 == 0))
    {
        printf("Yes number is Divisible by 3 and 2");
    }
    else
    {
        printf("NO number is NOT Divisible by 3 and 2");
    }

    return 0;
}