// Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
float simpleIntrest(float, float, float);
int main()
{
    float p, t, r;
    printf("Enter the Principle P :\n");
    scanf("%f", &p);
    printf("Enter the Time take T :\n");
    scanf("%f", &t);
    printf("Enter the Rate R :\n");
    scanf("%f", &r);
    // function call
    float SI = simpleIntrest(p, t, r);
    printf("The Simple interest is = %.2f \n", SI);

    return 0;
}
// where P = Principal T = Time period in years R = Rate of interest per annum.
float simpleIntrest(float p, float t, float r)
{
    float SI = (p * t * r) / 100;
    return SI;
}