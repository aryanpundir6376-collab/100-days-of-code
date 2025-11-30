// Print all enum names and integer values using a loop.
#include <stdio.h>

enum UserRole
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    for (int i = ADMIN; i <= GUEST; i++)
    {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
