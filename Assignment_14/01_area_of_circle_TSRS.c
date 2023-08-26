// Write a function to calculate the area of a circle. (TSRS)
#include <stdio.h>
float areaCircle(float r, float pi); // Function deceleration
int main()
{
    int r;
    printf("Enter the value of R");
    scanf("%d", &r);
    float area = areaCircle(r, 3.14); // Function call 
    printf("The area of the circle is: %f\n", area);

    return 0;
}

float areaCircle(float r, float pi)
{
    float area = pi * r * r; // calculation for area of circle
    return area;
}
