// A simple function to add two number s
#include <stdio.h> // For preedefine function such as printf()||sacnf()
void add();        // Function Deceleration

int main() // Main function     // Take Noting
{
    add(); // Function call
    printf("\n");
    return 0; // Return something
}

void add() // Creating a function
{
    int a, b, sum; // Local variable Deceleration
    printf("Enter two number:");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum= %d ", sum);
}
