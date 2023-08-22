// Write a program which takes the length of the sides of a triangle as an input.
// Display whether the triangle is valid or not .

#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("\n Enter the THREE sides of TRIANGLE:");
    scanf("%d%d%d", &side1, &side2, &side3);
    if ((side1 + side2 > side3) && (side2 + side3 >= side2) && (side3 + side1 > side1))
    {
        printf("It's VALID Triangle");
    }
    else
    {
        printf("It's NOT VALID Triangle");
    }
    return 0;
}