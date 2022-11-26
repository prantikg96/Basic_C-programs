#include "stdio.h"
int main()
{
    int a,b;
    printf("Enter two numbers to find HCF: ");
    scanf("%d%d",&a,&b);
    while(a!=b)
    {
        if(a > b)
        a=a-b;
        else
        b=b-a;
    }
    printf("GCD = %d",a);
    return 0;
}
