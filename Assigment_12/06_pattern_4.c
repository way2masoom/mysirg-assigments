// Display the following Pattern
// ABCD
// ABC 
// AB  
// A   

#include <stdio.h>
int main()
{
    int i, j; // i=rows & j=columns
    char k;
    for (i = 1; i <= 4; i++)
    {
        // K is a another Variable to print the A in the pattern
        k = 'A';
        for (j = 1; j <= 4; j++)
        {
            if (j <= 5 - i)
            {
                printf("%c", k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}