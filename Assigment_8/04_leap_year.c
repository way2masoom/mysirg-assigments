// Write a program to check whether a given
//  year is a leap year or not .

#include <stdio.h>
int main()
{

    int year;
    printf("\n Enter the Year to check the leap Year:");
    scanf("%d", &year);

    // Condition to check Leap YEAR

    if ((year % 4) && (year % 400))
    {
        printf("\n %d Is a leap YEAR!", year);
    }
    else
    {
        printf("\n %d Is NOT a leap YEAR!", year);
    }

    return 0;
}