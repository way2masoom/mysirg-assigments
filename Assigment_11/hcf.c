// Finding A HCF of program
#include <stdio.h>
int main()
{
    int num1, num2, swap;
    printf("Enter two Number  A and B:");
    scanf("%d%d", &num1, &num2);

    // int lcm = num1 * num2;

    printf("HCF of %d and %d is = ", num1, num2);
    while (num2 != 0)
    {
        if (num2 < num1)
        {
            /* Swapping the Value */
            swap = num1;
            num1 = num2;
            num2 = swap;
        }
        else
        {
            num2 = num2 % num1;
        }
    }
    printf("%d ", num1);

    // lcm = lcm / num1;

    return 0;
}