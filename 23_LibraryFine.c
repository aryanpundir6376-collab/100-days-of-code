/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include <stdio.h>
int main()
{
    int days, fine=0;
    printf("Enter the no. of late days. \n");
    scanf("%d", &days);

    if (days <= 5)
    fine = 2 * days;

    else if (days > 5 && days <= 10)
    fine = (2 * 5) + ((days - 5) * 4);

    else if (days > 10 && days <= 30)
    fine = (2 * 5) + (4 * 5) + ((days - 10) * 6);

    else
    printf("MEMBERSHIP CANCELLATION !!!\n");

    printf("FINE = %d",fine);
    return 0;
}