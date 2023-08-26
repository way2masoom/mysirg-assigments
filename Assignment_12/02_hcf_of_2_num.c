// Write a program to calculate HCF of two numbers
#include <stdio.h>
int main()
{
    int a, b, H;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);
    
    // for minimum
    int min = (a < b) ? a : b; // means only checking which one is smallest|| Minimum one

    // Logic for HCF
    for (H = min; H >= 1; H--)
    {
        if (a % H == 0 && b % H == 0)
            break;
    }

    printf("HCF is = %d ", H);

    return 0;
}