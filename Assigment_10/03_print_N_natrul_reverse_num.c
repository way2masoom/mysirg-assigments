// Write a program to print the first N natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int i = 1;
    int n = 20; // N number is define here as 20 times

    while (i <= n)
    {
        printf("N times Natural Number In REVERSE Order =%d\n", i * 2 - 1);
        i++;
    }

    return 0;
}