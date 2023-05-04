// Write a program to check whether a given number
// is positive, negative or zero.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number Please :");
    scanf("%d", &num);

    // condition to check number is positive, Negative or Zero
    if (num >= 0)
    {
        printf("Positive Number");
    }
    else if (num <= 0)
    {
        printf("Number is Negative or Zero");
    }

    return 0;
}