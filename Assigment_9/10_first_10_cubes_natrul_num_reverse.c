//  Write a program to print the cubes of the first 10 natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int i = 10;
    while (i >= 1)
    {
        printf("Cubes of first 10 Natural Number In Reverse Order REVERSE %d=%d\n", i, i * i * i);

        i--;
    }

    return 0;
}