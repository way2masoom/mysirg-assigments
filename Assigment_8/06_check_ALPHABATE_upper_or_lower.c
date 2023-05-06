// Write a program to check whether a given character is an alphabet(uppercase),
// an alphabet(lower case), a digit or a special character.

#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter any character:");
    scanf("%s", &alpha);
    
    // Condition to check Alphabet LOWER case
    if (alpha >= 'a' && alpha <= 'z')
    {
        printf("It is Alphabet(LOWER CASE) character");
    }
    // Condition to check Alphabet UPPER case
    else if ((alpha >= 'A' && alpha <= 'Z'))
    {
        printf("It is Alphabet(UPPER) character");
    }
    // Condition to check Digit
    else if (alpha >= '0' && alpha <= '9')
    {
        printf("It's Digits");
    }
    // If it doesn't meet any condition it's special character
    else
    {
        printf("Special Charater");
    }
    return 0;
}