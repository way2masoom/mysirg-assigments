// Write a program to check whether a given
//  year is a leap year or not .

#include <stdio.h>
int main()
{

    int year;
    printf("\n Enter the Year to check the leap Year:");
    scanf("%d", &year);

    // Condition to check Leap YEAR

    if (year % 4 == 0)
    {
        printf(" %d Is a leap YEAR!\n", year);
    }

    else if (year % 400 == 0)
    {
        printf("\n %d Is a leap YEAR!\n", year);
    }

    else if (year % 100 != 0)
    {

        printf(" %d  Is NOT a leap YEAR!\n", year);
    }

    else
    {
        printf(" %d  Is NOT a leap YEAR!\n", year);
    }

    // another way
    // if ((year % 4 == 0) && (year % 400 == 0) || (year % 100 != 0))
    // {
    //     printf("%d is a leap year", year);
    // } else {
    //     printf("%d is not a leap year",year);
    // }

    return 0;
}