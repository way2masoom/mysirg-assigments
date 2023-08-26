// WAP to find the prime number
#include <stdio.h>
int main()
{
    int i, n, flag = 0;
    printf("Enter a number :");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%d a prime number ", n);
    else
        printf(" %d Not a prime number ", n);

    return 0;
}