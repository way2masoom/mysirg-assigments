// WAP to calculate the SUM of the first N natural number
#include <stdio.h>
int main()
{
    int num, i; // Initialization
    int sum = 0;
    printf("Enter A Number :");
    scanf("%d", &num);

    // condition to calculate Sum of N numbers
    for (i = 1; i < num; i++)
    {
        sum = sum + i; // To add the number
        printf("\n SUM of the first N natural number is =%d", sum);
    }

    return 0;
}