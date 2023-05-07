// Write a program to print the cubes of first 10 natural numbers
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("Cubes of first 10 Natural %d NUmber=%d\n", i, i * i * i);
        i++;
    }

    return 0;
}