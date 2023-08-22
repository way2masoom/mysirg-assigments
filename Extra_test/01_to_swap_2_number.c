// WAP to swap the value of two given Integer value A=B && B=A
#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter the First Number A:");
    scanf("%d", &a);

    printf("Enter the second Number B:");
    scanf("%d", &b);

    // Condition To Swap the Number
    temp = a; // a=5 temp=5
    a = b;    // a=5 b=10
    b = temp; // temp=5 b=5

    printf("Number after Swap \t A=%d B=%d", a, b);

    return 0;
}