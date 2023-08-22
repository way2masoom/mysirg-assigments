#include <stdio.h>

int main()
{
    int i, j; // Declare loop control variables

    // Outer loop for each row
    for (i = 1; i <= 5; i++)
    { // Iterate from 1 to 5 (number of rows)
        // Inner loop for each column within a row
        for (j = 1; j <= 5; j++)
        { // Iterate from 1 to 5 (number of columns)
            if (j >= i)
                printf("*"); // Print '*' if column number is greater than or equal to row number

            else
                printf(" "); // Print a space if column number is less than row number
        }
        printf("\n"); // Move to the next line after printing a row
    }

    return 0; // Indicate successful program completion
}
