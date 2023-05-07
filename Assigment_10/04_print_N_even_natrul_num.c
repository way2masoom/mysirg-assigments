// Write a program to print the first N even natural numbers.
#include <stdio.h>
int main()
{
    int i = 1;
    int n = 20; // N number is define here as 20 times
    while (i < n)
    {
        printf("First N EVEN Natural Number=%d\n", i * 2);
        i++;
    }

    return 0;
}