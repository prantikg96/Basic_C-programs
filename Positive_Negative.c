#include "stdio.h"
int main()
{
    int a;
    printf("\nEnter a number: ");
    scanf("%d",& a);
    if(a<0)
    {
    printf("\n %d is a negative number", a);
    }
    else
    {
        printf("\n %d is a positive number", a);
    }
    return 0;
}