//  Write a program to print the first 10 even natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int i = 10;
    while (i >= 1)
    {
        printf("Even Natural In REVERSE Order=%d\n", i * 2);
        i--;
    }

    return 0;
}