/******************* This is the example of Takes Nothing and Return Something **************************/
// A simple function to add two numbers

#include <stdio.h> // For preedefine function such as printf()||sacnf()
// int add(int, int); // Function Deceleration
int main()         // Main function     // Take Noting
{
    int x, y, sum; // Local variable
    printf("Enter two number:");
    scanf("%d %d", &x, &y);

    sum = add(x, y);        // Calling function and Returning A,B value
    printf("Sum =%d", sum); // Printing the result

    // add(x, y);

    return 0; // Return Something
}

int add(int a, int b) // Creating a function || Take something
{
    return a + b;
}