/*Input a number and check buzz or not
Ex 49,47
Number either divisible by 7 or ends with 7 .*/
#include "stdio.h"
int main()
{
    int a;
    printf("\nEnter a number to check whether its buzz number or not: ");
    scanf("%d", &a);
    if(a%7 == 0 || a%10 == 7)
    {
        printf("%d is a buzz number.",a);

    }
    else
    {
        printf("\n%d is not a buzz number.",a);
    }
    return 0;
}