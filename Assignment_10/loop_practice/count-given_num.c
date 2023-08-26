// WAP to count the given number
#include <stdio.h>
int main()
{
    int num, count=0;   // Initialize count to 0
    printf("ENter the Digit :");
    scanf("%d", &num);

    /// Condition to find the number of digits
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("The Number of digit is = %d", count);

    return 0;
}