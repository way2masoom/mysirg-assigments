// Program to find HCF
#include <stdio.h>
int main()
{
    int a, b, H;
    printf("Enter Two Numbers :");
    scanf("%d %d", &a, &b);

    // H = a < b ? a : b; || if a grater then b the print A is grater or B is grater A=6 & B=4 (a<b)

    // Logic for HCF
    // H= a<b?a:b means only checking which one is smallest one
    // H>=1 means check the condition up  1 or grater then 1
    // H-- means decreasing the value of H
    for (H = a < b ? a : b; H >= 1; H--)
        if (a % H == 0 && b % H == 0)
            break;

    printf("HCF is = %d ", H);
    return 0;
}