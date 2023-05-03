// WAP to find the given number is positive or Non negative
//  only using IF condition

#include <stdio.h>

int main()
{
    int num;
    printf("\nENTER a number to check POSITIVE or NEGATIVE:");
    scanf("%d", &num);

    // Condition to check POSITIVER or NEGATIVE

    if (num > 0)
    {
        printf("It's POSITIVE number");
    }
    if (num <= 0)
    {
        printf("It's Non POSITIVE number");
    }

    return 0;
}