// Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student students[], int n)
{
    int topIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (students[i].marks > students[topIndex].marks)
        {
            topIndex = i;
        }
    }
    return students[topIndex];
}

int main()
{
    int n = 5;
    struct Student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        getchar(); // consume leftover newline
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    struct Student top = getTopStudent(students, n);

    printf("Top Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
