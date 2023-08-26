#include <stdio.h>

int main()
{
    int month;

    // Display the menu
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Use a switch statement to determine the number of days based on the month
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Number of days: 31\n"); // Months with 31 days
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Number of days: 30\n"); // Months with 30 days
        break;
    case 2:
        printf("Number of days: 28 or 29\n"); // February (28 or 29 days)
        break;
    default:
        printf("Invalid month number\n"); // Invalid month number
    }

    return 0;
}
