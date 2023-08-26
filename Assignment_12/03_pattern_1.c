// Write a program to display following patterns
// *
// **
// ***
// ****
#include <stdio.h>
int main()
{
    int i, j;       // i= rows & j= columns 
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            // condition to print the asterisks 
            if (j >= 5 - i)
                printf("*");
            else
                printf("");
        }
        printf("\n");
    }
    return 0;
}