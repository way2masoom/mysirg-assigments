// wap to print the number of A table
#include <stdio.h>
int main()
{
    int num, i;
    printf("enter a number :");
    scanf("%d",&num);

    // condition to find the table
    for (i = 1; i <= 10; i++)
    {
        printf("\n %d X %d = %d",num,i,num * i);
    }
    return 0;
}