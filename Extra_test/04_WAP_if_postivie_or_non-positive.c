/* WAP to check where the given number is POSITIVE or NON-POSITIVE
Only By using Conditional Operator */

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter a number");
    scanf("%d", &x);

    /* Condition To check the Number is Positive or NON-Positive
    By using Conditional Operator*/
    y = x > 0 ? printf("Positive Number") : printf("Negative Number");

    // printf(y = x > 0 ? " Positive Number " : " Negative Number");

    return 0;
}