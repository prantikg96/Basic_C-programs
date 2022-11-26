#include "stdio.h"
int main()
{
    int fact,i,n,j,sum;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        fact=fact*j;
        sum=sum+fact;
    }
    printf("%d",sum);
    return 0;
}