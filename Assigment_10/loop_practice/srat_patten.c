// Star patten
#include <stdio.h>
int main()
{
    // int j, i;
    // for (i = 1; i <= 5; i++)
    // {
    //     /* code */
    //     for (j = 1; j <= 5; j++)
    //     {
    //         if (j<=6-i)
    //             printf("*");
    //         else
    //             printf("");
    //     }
    //     printf("\n");
    // }

    // printf("\n");

    // To take Inout From User 
    // int j, i,lines;
    // printf("Enter Number of Lines: ");
    // scanf("%d",&lines);
    // // To printf * for number of lines you want 
    // for (i = 1; i <= lines; i++)
    // {
    //     // To print the number of columns  
    //     for (j = 1; j <= lines; j++)
    //     {
    //     // To print the Blank line  
    //         if (j<=lines+1-i) // Lines+1 = Bec, we need one more digit here so,
    //             printf("*");
    //         else
    //             printf("");
    //     }
    //     printf("\n");
    // }

    // printf("\n");

    int j, i,lines;
    printf("Enter Number of Lines: ");
    scanf("%d",&lines);
    // To printf * for number of lines you want 
    for (i = 1; i <= lines; i++)
    {
        // To print the number of columns  
        for (j = 1; j <= lines; j++)
        {
        // To print the Blank line  
            if (i>=j) // Lines+1 = Bec, we need one more digit here so,
                printf("*");
            else
                printf("");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}