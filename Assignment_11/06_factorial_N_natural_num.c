// Write a program to calculate factorial of a Given number
#include <stdio.h>
int main()
{
    // Initialization
    int i, n;
    int fact = 1;
    printf("Enter a number which you want to Factorial:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of % d number is = % d", n, fact);

    return 0;
}