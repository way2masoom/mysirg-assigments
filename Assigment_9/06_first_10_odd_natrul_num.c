// Write a program to print the first 10 odd natural numbers
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("Odd Natural Number=%d\n", 2 * i - 1);
        i++;
    }
    // another way
    // int i = 1;
    // while (i <= 20)
    // {
    //     printf("Odd Natural Number=\t%d \n", i);
    //     i = i + 2;
    // }

    return 0;
}
