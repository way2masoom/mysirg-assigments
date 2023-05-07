// Write a program to print the squares of first N natural numbers in reverse order
#include <stdio.h>
int main()
{
    int i = 20; // initialization
    int n = 2;  // N is for condition certification
    while (i >= n)
    {
        printf("The Squares of first N natural numbers in Reverse Order %d = %d\n", i, i * i);
        i--;
    }

    return 0;
}