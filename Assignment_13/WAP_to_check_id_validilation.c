//  Write a C program to display user details using id.
#include <stdio.h>
int main()
{
    int id;
    printf("Enter Your Id :");
    scanf("%d", &id);
    // switch condition the check the id vallation
    switch (id)
    {
    case 22054417:
        printf("Name: MD Alam \n Branch: CSE \n Address: Nepal\n ");
        break;

    case 22054418:
        printf("Name: Rohit Kr. \n Branch: MSE \n Address: Japan\n ");
        break;
    case 22054415:
        printf("Name: Suriya yadev \n Branch: CEE \n Address: Srilanka\n ");
        break;

    case 22054419:
        printf("Name: Arjun shah \n Branch: B.tech \n Address: India\n ");
        break;
    default:
        printf("\n Invalid Id");
    }
    return 0;
}