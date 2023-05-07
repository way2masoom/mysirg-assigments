// Write a program to print the Cubes of first N natural numbers
#include <stdio.h>
int main()
{
    int i = 1;
    int n = 20; // N times number is = 20 (suppose user entered 20)
    while (i <= n)
    {
        printf("The Cubes of first N natural numbers %d = %d\n", i, i * i * i);
        i++;
    }

    return 0;
}