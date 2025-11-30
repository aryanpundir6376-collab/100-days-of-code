// Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;

    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = '\0'; // Remove newline

    int choice;
    printf("Select gender (0: MALE, 1: FEMALE, 2: OTHER): ");
    scanf("%d", &choice);

    if (choice < MALE || choice > OTHER)
    {
        printf("Invalid gender.\n");
        return 1;
    }

    p.gender = (enum Gender)choice;

    const char *genderNames[] = {"MALE", "FEMALE", "OTHER"};
    printf("Name: %s\n", p.name);
    printf("Gender: %s\n", genderNames[p.gender]);

    return 0;
}
