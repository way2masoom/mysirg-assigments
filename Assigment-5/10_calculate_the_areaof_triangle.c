// 	Write a program to calculate the area of a triangle where base and height of the triangle are given
#include <stdio.h>
#include <conio.h>

int main()
{
    // Variable Deceleration

    // float height = 10, base = 5;
    // float area;
    float height, base, area;

    // Tacking data From User
    printf("Enter the Height of the triangle:");
    scanf("%f", &height);

    printf("Enter the Base of the triangle:");
    scanf("%f", &base);

    // calculate the area of the triangle
    area = 0.5 * base * height;
    printf("The area of Triangle is=%f", area);

    getch();
    return 0;
}