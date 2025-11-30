// Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Status
{
    SUCCESS = 10,
    FAILURE = 20,
    TIMEOUT = 30
};

int main()
{
    enum Status s;

    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    s = SUCCESS;
    printf("Enum variable s has value: %d\n", s);

    s = FAILURE;
    printf("Enum variable s has value: %d\n", s);

    s = TIMEOUT;
    printf("Enum variable s has value: %d\n", s);

    return 0;
}
