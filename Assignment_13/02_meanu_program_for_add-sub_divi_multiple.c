// Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include <stdio.h>
int main()
{
    int choice;
    int num1, num2; // Declare these variables once

    //  adding loop for repeating the task
    do
    {
        // Display menu options
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5. Exit\n");

        // Accept user's choice
        printf("\n Enter your choose:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("You choice is Addition\n\n");
            printf("Enter two numbers num1 and num2:");
            scanf("%d %d", &num1, &num2);
            printf("Addition is = %d ", num1 + num2);
            break;
        case 2:
            printf("You choice is Subtraction\n\n");
            printf("Enter two numbers num1 and num2:");
            scanf("%d %d", &num1, &num2);
            printf("Subtraction is = %d ", num1 - num2);
            break;
        case 3:
            printf("You choice is Addition\n\n");
            printf("Enter two numbers num1 and num2:");
            scanf("%d %d", &num1, &num2);
            printf("Multiplication is = %d ", num1 * num2);
            break;
        case 4:
            printf("You choice is Addition\n\n");
            printf("Enter two numbers num1 and num2:");
            scanf("%d %d", &num1, &num2);
            printf("Division is = %d ", num1 / num2);
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
    } while (choice != 6);
    {
        /* code */
    }

    return 0;
}