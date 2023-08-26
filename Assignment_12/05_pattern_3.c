// Display the following pattern
//    1
//   121
//  12321
// 1234321

#include <stdio.h>
int main()
{
    int i, j, k;
    // for i= rows
    for (i = 1; i <= 4; i++)
    {
        // k is another variable to print the numbers 
        k = 1;
        // for j= columns
        for (j = 1; j <= 7; j++)
        {
            // condition when to prints the numbers and when not
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%d", k); // printing the numbers

                // if j is less the 4 then increment the K otherwise decrease the K
                j < 4 ? k++ : k--;
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