/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/
#include <stdio.h>
int main()
{
    int units,bill=0;
    printf("Enter the no. of units consumed. \n");
    scanf("%d", &units);

    if (units <= 100)
    bill = 5 * units;

    else if (units > 100 && units <= 200)
    bill = (5 * 100 ) + ((units - 100) * 7);

    else if (units > 200 && units <= 300)
    bill = (5 * 100) + (7* 100) + ((units - 200) * 10);

    else
    bill = (5 * 100) + (7* 100) + ( 10 * 100)+((units - 300) * 12);

    printf("BILL = %d",bill);
    
    return 0;
}