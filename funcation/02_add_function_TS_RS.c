/******************* This is the example of Takes Something and Return Something **************************/
// A simple function to add two numbers

#include <stdio.h>  // For preedefine function such as printf()||sacnf()
void add(int, int); // Function Deceleration
int main()          // Main function     // Take Noting
{
    int x, y; // Local variable
    printf("Enter two number:");
    scanf("%d %d", &x, &y);
    add(x, y); // Calling function and Returning X,Y value

    return 0; // Return Something
}

void add(int a, int b) // Creating a function || Take something
{
    int c;
    c = a + b;
    printf("Sum =%d", c); // Printing the result
}