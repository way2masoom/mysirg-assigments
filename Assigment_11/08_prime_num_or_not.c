// Write a program to check whether a given number is a Prime number or not
#include <stdio.h>
int main()
{
    // int num, i; // Variable deceleration

    // // taking data from user
    // printf("Enter a number :");
    // scanf("%d", &num);

    // // condition to check the given number is prime or not
    // for (i = 2; i <= num - 1; i++)
    // {
    //     if (num % i == 0)
    //         break;
    // }

    // if (i == num)
    // {
    //     printf("\nIt's a Prime Number %d", num);
    // }
    // else
    // {
    //     printf("\nIt's NOT a Prime Number %d", num);
    // }

    // Another way
    // int isprime = 1;
    // int i, n;
    // printf("Enter a Number:\n");
    // scanf("%d", &n);

    // for (i = 2; i <= n-1; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isprime = 0;
    //         break;
    //     }
    // }

    // if (isprime)
    // {
    //     printf("\n It's a Prime Number %d", n);
    // }
    // else
    // {
    //     printf("\n It's NOT a Prime Number %d", n);
    // }


    // Another way

    int i, n;
    printf("Enter a Number:\n");
    scanf("%d", &n);

    for (i = 2; i <= n-1; i++)
    {
        if (n % i == 0)
        {
           printf("\n It's NOT a Prime Number %d", n);
           return 0;
        }
    }
 printf("\n It's a Prime Number %d", n);
   

    return 0;
}