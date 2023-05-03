// Write a program to calculate the volume of a Cuboid. Formula(volume=L*B*H)
#include <stdio.h>
#include <conio.h>

int main()
{
    int l, b, h; // L=Length B=Breath & H=Height
    int volume;

    // Taking data from user
    printf("enter the value of Length:");
    scanf("%d", &l);

    printf("Enter the Value of Breath:");
    scanf("%d", &b);

    printf("Enter the value of Height:");
    scanf("%d", &h);

    // Calculation
    volume = l * b * h;
    printf("The volume of cuboid is= %d", volume);

    getch();
    return 0;
}