// WAP To check whether the given number is  divisible 5 or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter A number:\n");
    scanf("%d", &num);

    // condition to check Number is divisible By 5 or NOT
    if (num % 5 == 0)
    {
        printf("Number is Divisible By 5");
    }
    else
    {
        printf("Number is NOT Divisible By 5");
    }

    return 0;
}