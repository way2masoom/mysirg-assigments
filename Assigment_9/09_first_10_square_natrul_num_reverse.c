// Write a program to print the squares of first 10 natural numbers in reverse order
#include <stdio.h>
int main()
{
    int i = 10;
    while (i >= 2)
    {
        printf("Square of first 10 Natural NUmber=%d REVERSE =%d\n", i, i * i);

        i--;
    }

    return 0;
} 