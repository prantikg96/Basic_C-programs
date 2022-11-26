/*Unit.           Fare
1st 150.     .50/unit
2nd 200.    1.00/unit (200+150=350)
3rd. 75.       2.50/unit (350+75=425)
4th 75.        3.50/unit (425+75=500)
above 500.  5.00/unit*/
#include "stdio.h"
int main()
{
int unit;
float bill;
printf("\nEnter units consumed: ");
scanf("%d", &unit);
if(unit<=150)
{
    bill = unit * 0.50;
}
else if((unit>150) && (unit<=350))
{
    bill = unit * 1.00;
}
else if((unit>350) && (unit<=425))
{
    bill = unit * 2.50;
}
else if((unit>425) && (unit<=500))
{
    bill = unit * 3.50;
}
else if(unit>500)
{
    bill = unit * 5.00;
}
printf("\nElectric bill consumed = Rs.%.2f",bill);
return 0;
}
