// Write a program to find greater among three numbers.
// If two or three numbers are identical and
// greatest among all then print it only once.

#include <stdio.h>
// Creating  a function
int identical()
{
    int num1, num2, num3;
    if ((num1 == num2) && (num1 == num2) && (num1 == 3))
    {
        printf("All numbers are identical and greatest.");
    }
    else if (num1 == num2 || (num1 == num3) || (num2 == num3))
    {
        if ((num1 > num2) && (num1 > num3))
        {
            printf("%d is the largest number.\n ", num1);
        }
        else if ((num2 > num1) && (num2 > num3))
        {
            printf("%d is the largest number.\n ", num2);
        }
        else if ((num3 > num1) && (num3 > num2))
        {
            printf("%d is the largest number.\n ", num3);
        }
    }
}
int main()
{
    int num1, num2, num3;
    printf("\n Enter three Number Please:");
    scanf("%d%d%d", &num1, &num2, &num3);

    // condition to find identical and grater among 3 numbers
    if ((num1 == num2) && (num1 == num2) && (num1 == 3))
    {
        printf("All numbers are identical and greatest.");
    }
    else if (num1 == num2 || (num1 == num3) || (num2 == num3))
    {
        if ((num1 >= num2) && (num1 >= num3))
        {
            printf("%d is the largest number.\n ", num1);
        }
        else if ((num2 >= num1) && (num2 >= num3))
        {
            printf("%d is the largest number.\n ", num2);
        }
        else if ((num3 >= num1) && (num3 >= num2))
        {
            printf("%d is the largest number.\n ", num3);
        }
    }
    else
    {
        // Condition to find grated among three numbers
        if ((num1 > num2) && (num1 > num3))
        {
            printf("%d is the largest number.\n ", num1);
        }
        else if ((num2 > num1) && (num2 > num3))
        {
            printf("%d is the largest number.\n ", num2);
        }
        else
        {
            printf("%d is the largest number.\n ", num3);
        }
    }

    return 0;
}