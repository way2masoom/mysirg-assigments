// Write a program to print first N terms of a Fibonacci series
#include <stdio.h>
int main()
{
    int a = 0, b = 1, N, c;
    printf("Enter the value of N :");
    scanf("%d", &N);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= N; i++)
    {
        printf("%d ", a);
        c = a + b; // c=a+b= means 0+1=1
        a = b;     // a=b means a=0 && b=1 so, a=b is a=1
        b = c;     // b=c means b=1 && c=1 b=c is b=1
    } 

    // OR
    // int a = -1, b = 1, N, c;
    // printf("Enter the value of N :");
    // scanf("%d", &N);
    // printf("Fibonacci Series: ");
    // for (int i = 1; i <= N; i++)
    // {
    //     c = a + b; // c=a+b= means -1+1=0
    //     printf("%d ", c);
    //     a = b; // a=b means a=-1 && b=1 so, a=b is a=0
    //     b = c; // b=c means b=1 && c=0 is b=0
    // }

    printf("\n");
    return 0;
}