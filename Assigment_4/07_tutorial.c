/* Write a C program containing declaration of three variables
(of type int, char and float), also assign some values to them
 and print values of all three variables using single printf().*/
//
#include <stdio.h>
#include <conio.h>
int main()
{
    int myInt = 5;
    char myLetter = 'D';
    float myFloatNum = 7.5;

    printf("This is Int value : \t %d \n", myInt);
    printf("This is Char value : \t %f \n", myFloatNum);
    printf("This is Float value : \t %c \n", myLetter);
    getch();
    return 0;
}