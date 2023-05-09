// Write a program to count digits in a given number
#include <stdio.h>
int main()
{
    int num, i, digit, count = 0;

    printf("Enter Number :");
    scanf("%d", &num);

    while (num != 0)
    {
        num = num / 10;
        count = count + 1;
    }
    printf("\n  total digits is = %d", count);
    i++;

    return 0;
}