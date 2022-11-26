//Input angles of triangle and check whether it right angle, obtuse, acute angle triangle
#include "stdio.h"
int main()
{
int angle1,angle2,angle3,sum;
printf("\nEnter 1st angle of triangle: ");
scanf("%d",& angle1);
printf("\nEnter 2nd angle of triangle: ");
scanf("%d",& angle2);
printf("\nEnter 3rd angle of triangle: ");
scanf("%d",& angle3);
sum = angle1 + angle2 + angle3;
if((angle1==90 || angle2==90 || angle3==90) && (sum==180))
{
    printf("\nThis constructs a right angled triangle.\n");
    }
    else if((angle1 > 90 || angle2 > 90 || angle3 > 90) && (sum==180))
    {
        printf("\nThis constructs an obtuse angled triangle.\n");
    }
        else if((angle1 < 90 || angle2 < 90 || angle3 < 90) && (sum==180))
        {
    printf("\nThis constructs an acute angled triangle.\n");
    }
    else 
    printf("\nThe given data can't construct a triangle.\n");
return 0;
}
