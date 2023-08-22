// Display the following Pattern
// AAAAAAA
//  AAAAA
//   AAA
//    A

#include <stdio.h>
int main()
{
    int i, j; // i= rows & j= columns
    char k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            k = 'A'; // Assigning k='A' character
            // condition to print the asterisks
            if (j >= i && j <= 8 - i)
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