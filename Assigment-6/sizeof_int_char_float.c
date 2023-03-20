//W.A.P to print size of an int, a float, a char and a double type variable 
#include <stdio.h>
int main()
{

    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %d bytes\n", sizeof(intType));
    printf("Size of float: %d bytes\n", sizeof(floatType));
    printf("Size of double: %d bytes\n", sizeof(doubleType));
    printf("Size of char: %d byte\n", sizeof(charType));


    return 0;
}