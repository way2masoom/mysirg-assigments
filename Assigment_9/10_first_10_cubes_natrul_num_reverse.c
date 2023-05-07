//  Write a program to print the cubes of the first 10 natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int i = 10;
    while (i >= 1)
    {
        printf("Square of first 10 Natural NUmber=%d REVERSE =%d\n", i, i * i * i);

        i--;
    }

    return 0;
}