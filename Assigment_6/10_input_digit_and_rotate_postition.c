// Write a program to take a three digit number from the user and
// rotate its digits by one position towards the right.

#include <stdio.h>
int main()
{
    int num, digit, result = 0;

    printf("Enter the Three Numbers:");
    scanf("%d", &num);

    printf("\n Digits Before Rotated is =%d", num);

    digit = (num % 10);         // num=234 result=4
    // result=result*10+digit;  // result= 0*10=0+4=4
    num = num / 10;             // num= 234/10=23;

    result = digit * 100 + num;

    printf("\n Digits after Rotated towards the Right: %d", result);

    // Logic For REVERSE
    // int sum=0;
    //digit = (num % 10); // num=234 result=4
    //sum=sum*10+digit; // sum= 0*10=0+4= 4
    //num=num/10;     // num= 234/10=23;

    return 0;
}