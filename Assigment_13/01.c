// WAP which takes the month number as an input and display number of days in that month.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d ", &num);
    // condition to display number of days in month
    switch (num)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Number of days in months is  31");
        break;
    case 5:
    case 6:
        printf("Number of days: 28 or 29\n");
        break;

    default:
        printf("Invalid month number\n");
    }
    return 0;
}