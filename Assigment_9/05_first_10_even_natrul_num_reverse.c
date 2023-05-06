//  Write a program to print the first 10 even natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int i = 10;
    while (i >= 2)
    {
        printf("Even Natural REVERSE Number=%d\n", i);
        i -= 2;
    }

    return 0;
}