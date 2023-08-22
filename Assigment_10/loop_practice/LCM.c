// Program to fLCMnd the LCM of a number
#include <stdio.h>
int main()
{
    // int a, b, L; // L= LCM
    // printf("Enter two Numbers :");
    // scanf("%d %d", &a, &b);
    // // logLCMc for LCM
    // for (L = 1; L <= a * b; L++)
    // {
    //     if (L % a == 0 && L % b == 0)
    //     {
    //         break;
    //     }
    // }
    // printf("The LCM = %d", L);

    // Another way

    int a, b, L; // L= LCM
    printf("Enter two Numbers :");
    scanf("%d %d", &a, &b);
    // if a>b means a=4 and b=6, a>b?a:b >> In this condition we only checking the highest number multiple  
    // if (a>b)
    //     printf("%d", a);
    // else
    //     printf("%d", b);
    // ↓↓
    // simple format
    // L = a > b ? a : b;

    // logLCMc for LCM
    for (L = a > b ? a : b; L <= a * b; L = L + (a > b ? a : b))
    {
        if (L % a == 0 && L % b == 0)
            break;
    }
    printf("The LCM = %d", L);

    return 0;
}