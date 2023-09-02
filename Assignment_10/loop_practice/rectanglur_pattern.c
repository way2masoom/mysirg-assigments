// Programs to print rectangular pattern
//     *
//    * *
//   *   *
//  *     *
// *********

#include <stdio.h>
int main()
{
    int i, j;

    // Outer loop for each row
    for (i = 0; i < 5; i++)
    {
        // Inner loop for each column
        for (j = 0; j < 9; j++)
        {
            // If conditions to print '*' or ' ' based on the pattern
            if (j == 4 - i || j == 4 + i || i == 4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
