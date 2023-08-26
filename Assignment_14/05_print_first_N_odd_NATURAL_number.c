// Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void isOdd(int num);
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    // function call
    printf("First N times ODD Natural Number is =%d \n", num);
    isOdd(num);

    return 0;
}
void isOdd(int num)
{
    for (int i = 1; i <= num; i = i + 2)
    {
        printf("%d \n", i);
    }
}