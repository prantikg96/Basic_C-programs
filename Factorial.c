#include "stdio.h"
int main()
{
    int fact,i,n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<n;i++)
    fact=fact*i;
    printf("\nFactorial of %d = %d",n,fact);
    return 0;
}