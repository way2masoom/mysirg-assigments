#include <stdio.h>

float areaCircle(float r); // Declare the function prototype

int main()
{
    float r;
    printf("Enter the value of r: ");
    scanf("%f", &r); // Remove the space after %f

    float area = areaCircle(r); // Call the function and store the result

    printf("The area of the circle is: %f\n", area);

    return 0;
}

float areaCircle(float r)
{
    float area = 3.14 * r * r;
    return area;
}
