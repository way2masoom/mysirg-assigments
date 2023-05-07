// Write a program to print the first N odd natural numbers
#include <stdio.h>
int main()
{
    int i = 1;
    int n = 20; // N times number is = 20 (suppose user entered 20)
    while (i < n)
    {
        printf("First N times ODD Natural Number is =%d\n", i * 2 - 1);
        i++;
    }

    return 0;
}