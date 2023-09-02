// Printing pattern Triangle
// *
// **
// * *
// *  *
// *****

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the size of triangle :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == 0 || i == j || i == n - 1)
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
