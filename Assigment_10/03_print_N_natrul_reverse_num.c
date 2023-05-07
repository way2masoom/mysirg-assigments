// Write a program to print the first N natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int n = 20; // N number is define here as 20 times

    while (n >= 1)
    {
        printf("N times Natural Number In REVERSE Order =%d\n", n);
        n--;
    }

    return 0;
}