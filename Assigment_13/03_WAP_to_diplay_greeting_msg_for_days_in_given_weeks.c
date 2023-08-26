// Write a program which takes the day number of a week and displays a unique
// greeting message for the day.
#include <stdio.h>
int main()
{
    // int choice;
    int dayNumber; // Declaring variable once

    // Displaying menu
    // printf("1.Monday\n");
    // printf("2.Tuesday\n");
    // printf("3.Wednesday\n");
    // printf("4.Thursday\n");
    // printf("5.friday\n");
    // printf("6.Saturday\n");
    // printf("7.Sunday\n");
    // printf("8.Exit\n");

    // Accept user choice
    printf("Enter the day number (1-7): ");
    scanf("%d", &dayNumber);

    switch (dayNumber)
    {
    case 1:
        printf("Hello! It's Sunday.\n");
        break;
    case 2:
        printf("Hello! It's Monday.\n");
        break;
    case 3:
        printf("Hello! It's Tuesday.\n");
        break;
    case 4:
        printf("Hello! It's Wednesday.\n");
        break;
    case 5:
        printf("Hello! It's Thursday.\n");
        break;
    case 6:
        printf("Hello! It's Friday.\n");
        break;
    case 7:
        printf("Hello! It's Saturday.\n");
        break;
    case 8:
        break;
    default:
        printf("Invalid day number.\n");
    }

    return 0;
}