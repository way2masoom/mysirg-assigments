/* WAP to check where the given number is POSITIVE or NON-POSITIVE
Only By using IF ELSE Condition */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number");
    scanf("%d", &num);

    // Condition to check Given number is Positive
    if (num > 0)
        printf("It is POSITIVE Number:");

    else
        // Condition to check Given number is NON-Positive
        printf("It is NEGATIVE Number:");

    // Note: IF there is only one statement in IF then we don't need to Used Curly Bracket {}

    return 0;
}