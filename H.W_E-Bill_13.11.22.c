#include "stdio.h"
int main()
{
int unit;
float e_bill;
printf("\nEnter units consumed: ");
scanf("%d",& unit);
if(unit<=100)
{
e_bill=unit*0.50;
}
else if((unit>100)&&(unit<=250))
{
e_bill=unit*1.00;
}
else if((unit>250)&&(unit<=500))
{
e_bill=unit*2.50;
}
else if(unit>500)
{
e_bill=unit*3.50;
}
printf("\nElectric bill consumed=Rs.%.2f", e_bill);
return 0;
}
