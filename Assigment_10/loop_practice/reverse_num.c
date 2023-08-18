// Wap to find the reverse of any number
#include <stdio.h>
int main()
{
    int i, reverse = 0, reminder, num;
    printf("Enter a Digit :");
    scanf("%d", &num);
    // condition to find the reminder 
    printf("\n");
    printf("Number before reverse =%d",num);
    while (num>0)
    {
        /* code */
        reminder=num%10; // num=123=123%10  =3
        num=num/10;     // num/10=123/10    =12
        reverse=reverse*10+reminder;    // reverse= 0*10+3=3    // reverse= 3*10+2=32 // reverse= 32*10+1=321 
    }
    printf("\n Number after Reverse = %d",reverse);
    
    return 0;
}