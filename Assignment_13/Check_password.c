// C program to check password is correct or incorrect using switch-case
#include <stdio.h>
int main()
{
    int psw;
    printf("Enter the password To Login:");
    scanf("%d", &psw);
    switch (psw)
    {
    case 197:
        printf("--WELCOME--");
        break;

    default:
        printf("-INCORRECT PASSWORD-");
    }
    return 0;
}