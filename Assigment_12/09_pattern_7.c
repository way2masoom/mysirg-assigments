// WAP to display the following patterns
#include <stdio.h>
int main()
{
    int i, j, k; // r=rows and j=columns
    // for first 3 lines of rows
    int n = 5;
    k = (n / 2 + 1);
    
    for (i = 1; i <= (2*i - 1); i++)
    {
        // for first 3 lines of columns
        for (j = 1; j <= n; j++)
        {
            if (i + j <= k)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}