// Display the following Pattern
//    *
//   ***
//  *****
// *******

#include <stdio.h>
int main()
{
    int i, j; // i= rows & j= columns
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            // condition to print the asterisks
            if (j >= 5 - i && j <= 3 + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= 9; j++)
    //     {
    //         if (j >= 6 - i && j <= 4 + i)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }
    return 0;
}