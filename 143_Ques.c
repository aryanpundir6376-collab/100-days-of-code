// Find and print the student with the highest marks.
#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student students[5];

    for (int i = 0; i < 5; i++)
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

    int topIndex = 0;
    for (int i = 1; i < 5; i++)
    {
        if (students[i].marks > students[topIndex].marks)
        {
            topIndex = i;
        }
    }

    printf("Student with highest marks:\n");
    printf("Name: %s\n", students[topIndex].name);
    printf("Roll Number: %d\n", students[topIndex].roll_no);
    printf("Marks: %.2f\n", students[topIndex].marks);

    return 0;
}
