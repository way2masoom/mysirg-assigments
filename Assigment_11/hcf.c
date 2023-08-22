// Finding A HCF of program
#include <stdio.h>
int main()
{
    int num1, num2, swap;   // Variable deceleration 
    // Tacking data from user 
    printf("\nEnter Num1:");
    scanf("%d", &num1);

    printf("\nEnter Num2:");
    scanf("%d",&num2);

    int lcm = num1 * num2;

    printf("HCF of %d and %d is = ", num1, num2);
    while (num2 != 0)
    {
        // checking num1 is grater than num2 or not is YES then SWAP the value 
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

    lcm = lcm / num1;
    printf("\n LCM =%d",lcm);

    return 0;
}