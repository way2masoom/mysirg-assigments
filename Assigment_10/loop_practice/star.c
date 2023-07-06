// Program to print 6*6 star patten
// ******
// *****
// ****
// ***
// **
// *
#include <stdio.h>
int main()
{
    int i, j;

    // this loop for rows
    for (i = 1; i <= 5; i++)
    {
        // this loop for Column
        char ch = 'A';
        for (j = 1; j <= 5; j++)
        {
            if (j > i)
            {
                break;
            }
            else
            {
                printf("%d", j);
                // printf("A");
            }
        }
        printf("\n");
    }

    return 0;
}
