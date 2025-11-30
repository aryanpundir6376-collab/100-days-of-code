// Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s)
{
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s;

    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printStudent(s);

    return 0;
}
