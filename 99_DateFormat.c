// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main()
{
    char date[11], day[3], month[3], year[5];

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%10s", date);

    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';

    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';

    char *monthName;
    if (strcmp(month, "01") == 0)
        monthName = "Jan";
    else if (strcmp(month, "02") == 0)
        monthName = "Feb";
    else if (strcmp(month, "03") == 0)
        monthName = "Mar";
    else if (strcmp(month, "04") == 0)
        monthName = "Apr";
    else if (strcmp(month, "05") == 0)
        monthName = "May";
    else if (strcmp(month, "06") == 0)
        monthName = "Jun";
    else if (strcmp(month, "07") == 0)
        monthName = "Jul";
    else if (strcmp(month, "08") == 0)
        monthName = "Aug";
    else if (strcmp(month, "09") == 0)
        monthName = "Sep";
    else if (strcmp(month, "10") == 0)
        monthName = "Oct";
    else if (strcmp(month, "11") == 0)
        monthName = "Nov";
    else if (strcmp(month, "12") == 0)
        monthName = "Dec";
    else
        monthName = "Invalid";

    printf("Date in new format: %s-%s-%s", day, monthName, year);

    return 0;
}
