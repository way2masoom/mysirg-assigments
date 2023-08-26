// Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0.(TSRS)
#include <stdio.h>
int isEven(int num);
int main()

{
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);

    // function call
    int even = isEven(num);
    if (even == 1)
        printf("%d Is a Even number\n", num);
    else
        printf("%d Is a Odd number\n", num);

    return 0;
}
// function to find number is Even or odd
int isEven(int num)
{
    // condition to check number is odd or even
    if (num % 2 == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}