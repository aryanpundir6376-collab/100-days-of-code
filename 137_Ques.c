// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum UserRole
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum UserRole role;
    int choice;

    printf("Select role:\n0. ADMIN\n1. USER\n2. GUEST\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice < ADMIN || choice > GUEST)
    {
        printf("Invalid role.\n");
        return 1;
    }

    role = (enum UserRole)choice;

    switch (role)
    {
    case ADMIN:
        printf("Role: ADMIN - You have full access.\n");
        break;
    case USER:
        printf("Role: USER - You have limited access.\n");
        break;
    case GUEST:
        printf("Role: GUEST - You have minimal access.\n");
        break;
    }

    return 0;
}
