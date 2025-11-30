// Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++)
    {
        getchar(); // consume newline
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // remove newline

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(fp);

    printf("\nStored student records successfully.\nReading records from file:\n");

    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    struct Student s;
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3)
    {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}
