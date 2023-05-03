// Write a program to check whether a given number
// is divisible by 7 or divisible by 3.

#include <stdio.h>

int main()

{
    int num;
    printf("\n Enter a number to check whether number is Divisible by 7 OR by 3:");
    scanf("%d", &num);

    // condition to check number is divisible by 7 OR 3
    if ((num % 7 == 0) || (num % 3 == 0))
    {
        printf("NUMBER is Divisible by 7 or 3");
    }
    else
    {
        printf("NUMBER is not Divisible by 7 or 3");
    }
    return 0;
}
