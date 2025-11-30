// Create Employee structure with nested Date structure for joining date and print details.
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

    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d/%02d/%d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
