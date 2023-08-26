// Write a function to print first N natural numbers (TSRN)
#include <stdio.h>
void NaturalNum(int num);
int main()
{
    int num;
    printf("Enter a number : \n");
    scanf("%d", &num);
    // function call
    NaturalNum(num);

    return 0;
}
void NaturalNum(int num)
{
    for (int i = 1; i <= num; i++)
    {
        printf("\n First N natural Number is = %d \n", i);
    }
}