// Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s1, s2;

    printf("Enter details for first student:\n");
    printf("Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';
    printf("Roll Number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    getchar(); // consume newline

    printf("\nEnter details for second student:\n");
    printf("Name: ");
    fgets(s2.name, sizeof(s2.name), stdin);
    s2.name[strcspn(s2.name, "\n")] = '\0';
    printf("Roll Number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks)
    {
        printf("\nThe two students are identical.\n");
    }
    else
    {
        printf("\nThe two students are NOT identical.\n");
    }

    return 0;
}
