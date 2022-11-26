#include "stdio.h"
int main()
{
    int a;
    printf("\nEnter a value: ");
    scanf("%d",& a);
    if(a>=10000 && a<100000)
    printf("\n %d is a five digit number.",a);
    else
    printf("\n %d is not a five digit number.",a);
    return 0;
}