// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics
// and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% :
// Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F

#include <stdio.h>
#include <math.h>
int main()
{
    float physics, chemistry, biology, math, computer;
    float percent, total;
    printf("Enter the mark of Physics:\n");
    scanf("%f", &physics);

    printf("Enter the mark of Chemistry:\n");
    scanf("%f", &chemistry);

    printf("Enter the mark of Biology:\n");
    scanf("%f", &biology);

    printf("Enter the mark of Math:\n");
    scanf("%f", &math);

    printf("Enter the mark of Computer:\n");
    scanf("%f", &computer);

    // finding total mark
    total = physics + chemistry + biology + math + computer;
    printf("\nTotal Make is =%.2f Out of 500", total);

    // finding total mark in Percentage
    percent = total / 5;
    // percent = (total / 500) * 100;
    printf("\nTotal Make is  In Percentage=%.2f", percent);

    //    Finding  grade according to given Data
    if (percent >= 90)
    {
        printf("\nYou got Grade A Percentage");
    }

    else if (percent >= 80)
    {

        printf("\nYou got Grade B Percentage");
    }

    else if (percent >= 70)
    {

        printf("\nYou got Grade C Percentage");
    }

    else if (percent >= 60)
    {

        printf("\nYou got Grade D Percentage");
    }
    else if (percent >= 50)
    {

        printf("\nYou got Grade E Percentage");
    }
    else if (percent >= 40)
    {

        printf("\nYou got Grade F Percentage");
    }
    else
    {
        printf("\nYou are fail");
    }

    return 0;
}
