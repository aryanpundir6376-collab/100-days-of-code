// Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main()
{
    struct Employee emp;
    FILE *fp;

    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data saved to employee.dat\n");

    // Read from binary file
    struct Employee readEmp;
    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee Details from file:\n");
    printf("Name: %s\n", readEmp.name);
    printf("ID: %d\n", readEmp.id);
    printf("Salary: %.2f\n", readEmp.salary);
    printf("Joining Date: %02d/%02d/%d\n", readEmp.joiningDate.day, readEmp.joiningDate.month, readEmp.joiningDate.year);

    return 0;
}
