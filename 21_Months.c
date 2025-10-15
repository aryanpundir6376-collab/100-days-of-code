//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter your choice.\n");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
    {
        printf("JANUARY , 31 Days.\n");
        break;
    }
    case 2:
    {
        printf("FEBRUARY , 28 Days.\n");
        break;
    }
    case 3:
    {
        printf("MARCH , 31 Days.\n");
        break;
    }
    case 4:
    {
        printf("APRIL , 30 Days.\n");
        break;
    }
    case 5:
    {
        printf("MAY , 31 Days.\n");
        break;
    }
    case 6:
    {
        printf("JUNE , 30 Days.\n");
        break;
    }
    case 7:
    {
        printf("JULY , 31 Days.\n");
        break;
    }
    case 8:
    {
        printf("AUGUST , 31 Days.\n");
        break;
    }case 9:
    {
        printf("SEPTEMBER , 30 Days.\n");
        break;
    }case 10:
    {
        printf("OCTOBER , 31 Days.\n");
        break;
    }case 11:
    {
        printf("NOVEMBER , 30 Days.\n");
        break;
    }case 12:
    {
        printf("DECEMBER , 31 Days.\n");
        break;
    }
    default:
    {
        printf("Invalid Input.\n");
        break;
    }
    }
    return 0;
}