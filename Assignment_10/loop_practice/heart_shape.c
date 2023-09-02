// Wap to print the heart shape;
// *******   *******
// ******** *********
// ******************
// *****MysirG******
//  ***************
//   *************
//    ***********
//     *********
//      *******
//       *****
//        ***
//         *
#include <stdio.h>
int main()
{
    int i, j;

    // Upper half of heart
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 18; j++)
        {
            // The condition below creates the left half of the heart shape
            // as well as the space in the middle.
            if ((j >= 2 - i && (j <= 6 + i)) || (j >= 12 - i) && (j <= 16 + i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower half of heart (resembling the top half but upside down)
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 18; j++)
        {
            if ((i == 1 && j == 6))
                printf("MysirG");
            if ((i == 1) && (j >= 6) && (j <= 11))
                continue;

            // The condition below creates the right half of the heart shape.
            if ((j >= i) && (j <= 18 - i))
            {
                printf("*");
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
