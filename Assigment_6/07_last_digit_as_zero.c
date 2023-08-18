// Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x = 2345 then make it x = 2340)
#include <stdio.h>
int main()
{
    int num;
    printf("Enter A Number to make Last Digit as ZERO:");
    scanf("%d", &num);

    // num = num - (num % 10); // num=234-(234%10)=234-4=230
    // or 
    num=num/10; // 12345/10 = 1234
    num=num*10; // 1234*10=12340

    printf("The last Digit as zero =%d", num);
    return 0;
}