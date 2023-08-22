// Write a program which takes the month number as
// an input and display number of days in that month.

#include <stdio.h>
int main()
{
    int month;
    printf("Enter months (1-12) : ");
    scanf("%d", &month);

    // condition to check days in months
    // This Condition will valid for 31 days in months
    if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
    {
        printf("In the Month of = %d There is 31 days in this months(according 2023)", month);
    }
    // This Condition will valid for 28 days in months
    else if (month == 2)
    {
        printf("In the Month of = %d There is 28 days in this months(according 2023)", month);
    }
    // This Condition will valid for 30 days in months
    else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
    {
        printf("In the Month of = %d There is 30 days in this months(according 2023)", month);
    }
    else
    {
        printf("Invalid month Number");
    }
    return 0;
}