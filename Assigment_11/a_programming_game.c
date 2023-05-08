// Define a game like program,In which User has to Enter an EVEN Number
// To win the game. User will get lest 3 chances.
#include <stdio.h>
int main()
{
    int x, i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter an EVEN Number:");
        scanf("%d", &x);
        if (x % 2 == 0)
            break;
    }
    if (i == 4)
    {
        printf("\nGame Over");
    }
    else
    {
        printf("You Win");
    }

    return 0;
}