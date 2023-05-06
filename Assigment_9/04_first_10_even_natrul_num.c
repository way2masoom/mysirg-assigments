// Write a program to print the first 10 even natural numbers.
#include <stdio.h>
int main()
{
    int i = 2;
    while ((i <= 10))
    {
        printf("Even Natural Number=%d\n", i);
        i += 2;
    }

    return 0;
}