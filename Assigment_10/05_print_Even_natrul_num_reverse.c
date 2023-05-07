// Write a program to print the first N even natural numbers in reverse order.
#include <stdio.h>
int main()
{
  
    int n = 10; // N number is define here as 20 times
    
    int i = n * 2;

    while (i >= 1)
    {
        printf("N times Natural Number In REVERSE Order =%d\n", i);
        i = i - 2;
    }

    return 0;
}