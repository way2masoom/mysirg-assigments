// 	Write a program which takes a character as input and print its ASCII code.
#include <stdio.h>
#include <conio.h>

int main()
{

    char ascii;
    printf("Enter a character to get it's ASCII code:");
    scanf("%c", &ascii);

    printf("The ASCII value of %c = %d", ascii,ascii);
    getch();
    return 0;
}