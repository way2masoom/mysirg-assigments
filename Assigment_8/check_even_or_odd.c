// WAP to check whether the given number is EVEN or ODD
#include <stdio.h>
int main()
{
    int num;
    printf("Enter A number to check EVEN or ODD:\n");
    scanf("%d", &num);

    if (num % 2) // if we used (num%2) it will be false so, it will print ODD number
    {
        printf("It is ODD Number");
    }
    else
    {
        printf("It is EVEN Number");
    }

    // another way to do this
    // if (num % 2 == 0)
    // {
    //     printf("It is EVEN Number");
    // }
    // else
    // {
    //     printf("It is ODD Number");
    // }

    return 0;
}