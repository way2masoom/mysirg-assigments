// WAP to find the factorial of a number
#include <stdio.h>
int main()
{
    int factorial = 1, n, i;
    printf("Enter a number to be factories :");
    scanf("%d", &n);
    // condition to find the factorial
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is = %d", n, factorial);
    return 0;
}