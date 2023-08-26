// Write a function to calculate the factorial of a number.(TSRS)
#include <stdio.h>
int factorialNum(int num);
int main()
{
    int num;
    printf("\n Enter a number :");
    scanf("%d", &num);
    // function call
    int fact = factorialNum(num);
    printf("Factorial of given Number is =%d \n", fact);
    return 0;
}
int factorialNum(int num)
{
    int factorial = num * num;
    return factorial;
}