// Write a program to print the cubes of the first N natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int i = 20;
    int n = 1; // N times number is = 20 (suppose user entered 20)
    while (i >= n)
    {
        printf("The Cubes of first N natural numbers in reverse order %d = %d\n", i, i * i * i);
        i--;
    }
    return 0;
}