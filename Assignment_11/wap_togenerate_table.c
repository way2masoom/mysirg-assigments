// WAP TO generate a table 
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of Tables you wants to print: \n");
    scanf("%d",&n);

    for (i=1; i <=n; i++)
    {
        for ( j =1; j<=n; j++)
        {
           printf("%d ",j*i);
        }
        printf("\n");
    }
    
 return 0;
}