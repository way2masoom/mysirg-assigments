// Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the value of A:");
    scanf("%d", &a);

    printf("Enter the value of B:");
    scanf("%d", &b);

    printf("Number Before swap: A=%d and B=%d \n", a, b);

    // Condition To Swap the Number
    temp = a; // a=5 temp=5
    a = b;    // a=5 b=10
    b = temp; // temp=5 b=5
    printf("Number After swap: A=%d and B=%d", a, b);

    return 0;
}