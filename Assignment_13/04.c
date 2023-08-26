#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double side1, side2, side3;

    do
    {
        // Display the menu
        printf("Menu:\n");
        printf("1. Check for isosceles triangle\n");
        printf("2. Check for right-angled triangle\n");
        printf("3. Check for equilateral triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the lengths of three sides: ");
            scanf("%lf %lf %lf", &side1, &side2, &side3);

            // Check for isosceles triangle condition
            if (side1 == side2 || side1 == side3 || side2 == side3)
                printf("The given sides form an isosceles triangle.\n");
            else
                printf("The given sides do not form an isosceles triangle.\n");
            break;

        case 2:
            printf("Enter the lengths of three sides: ");
            scanf("%lf %lf %lf", &side1, &side2, &side3);

            // Check for right-angled triangle condition (using Pythagoras theorem)
            if (side1 * side1 + side2 * side2 == side3 * side3 ||
                side2 * side2 + side3 * side3 == side1 * side1 ||
                side3 * side3 + side1 * side1 == side2 * side2)
                printf("The given sides form a right-angled triangle.\n");
            else
                printf("The given sides do not form a right-angled triangle.\n");
            break;

        case 3:
            printf("Enter the lengths of three sides: ");
            scanf("%lf %lf %lf", &side1, &side2, &side3);

            // Check for equilateral triangle condition
            if (side1 == side2 && side2 == side3)
                printf("The given sides form an equilateral triangle.\n");
            else
                printf("The given sides do not form an equilateral triangle.\n");
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice. Please select a valid option.\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
