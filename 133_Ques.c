// Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month
{
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main()
{
    enum Month m;

    for (m = JANUARY; m <= DECEMBER; m++)
    {
        switch (m)
        {
        case JANUARY:
            printf("January: 31 days\n");
            break;
        case FEBRUARY:
            printf("February: 28/29 days\n");
            break;
        case MARCH:
            printf("March: 31 days\n");
            break;
        case APRIL:
            printf("April: 30 days\n");
            break;
        case MAY:
            printf("May: 31 days\n");
            break;
        case JUNE:
            printf("June: 30 days\n");
            break;
        case JULY:
            printf("July: 31 days\n");
            break;
        case AUGUST:
            printf("August: 31 days\n");
            break;
        case SEPTEMBER:
            printf("September: 30 days\n");
            break;
        case OCTOBER:
            printf("October: 31 days\n");
            break;
        case NOVEMBER:
            printf("November: 30 days\n");
            break;
        case DECEMBER:
            printf("December: 31 days\n");
            break;
        }
    }

    return 0;
}
