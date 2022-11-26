#include "stdio.h"
int main()
{
    int sw,ar,l,b,ac,r,at,b1,h;
    printf("\nPress 1 for area of rectangle.");
    printf("\nPress 2 for area of circle.");
    printf("\nPress 3 for area of triangle.");
    printf("\nEnter choice: ");
    scanf("%d",&sw);
    switch(sw)
    {
        case 1:
        printf("\nEnter length: ");
        scanf("%d",&l);
        printf("\nEnter breadth: ");
        scanf("%d",&b);
        ar=l*b;
        printf("\nArea of rectangle= %d",ar);
        break;
        case 2:
        printf("\nEnter radius: ");
        scanf("%d",&r);
        ac=3.14*r*r;
        printf("\nArea of circle= %d",ac);
        break;
        case 3:
        printf("\nEnter breadth: ");
        scanf("%d",&b1);
        printf("\nEnter height: ");
        scanf("%d",&h);
        at=0.5*b1*h;
        printf("\nArea of triangle= %d",at);
        break;
        default:
        printf("\nError input. Please try again.");
    }
    return 0;
}
