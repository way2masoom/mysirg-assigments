// WAP to check where the given number is POSITIVE or NON-POSITIVE
// Only By using IF Condition

#include <stdio.h>
int main()
{

    int num;
    printf("Enter the Number");
    scanf("%d", &num);

    // Condition to check Given number is Positive
    if (num > 0)
    {
        printf("It is Positive Number:");
    }

    // Condition to check Given number is NON-Positive
    if (num <= 0)
    {
        printf("It is Negative Number:");
    }

    return 0;
}
