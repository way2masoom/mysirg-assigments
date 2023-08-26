// Write a program to swap values of two int variables without using third variable
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the First Number A:");
    scanf("%d", &a);

    printf("Enter the second Number B:");
    scanf("%d", &b);

    printf("Before swapping::");
    printf("a=%d and b=%d", a, b);

    // Swapping Number
    a = a + b; // a=10, b=20  a+b=(10+20)=30;
    b = a - b; // a=30, b=20  b=a-b=(30-20)=10
    a = a - b; // a=30, b=10  a-b=(30-10)=20

    printf("\n After Swapping \n");
    printf("Number after Swap A=%d and B=%d", a, b);
    return 0;
}