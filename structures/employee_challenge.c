#include <stdio.h>

typedef struct employee {
    char name[20];
    char hireDate[10];
    int salary;
} employee;

int main() {
    employee employee = {"Joe", "20/8/2012", 50809};

    printf("\nName: %s.\n"
           "Hire Date: %s.\n"
           "Salary: $%d.\n\n"
           "Enter new employee information: \n"
           "Name: ",
           employee.name, employee.hireDate, employee.salary);

    scanf("%s", employee.name);

    printf("Hire Date: ");
    scanf("%s", employee.hireDate);

    printf("Salary: ");
    scanf("%d", &employee.salary);

    printf("\nName: %s.\n"
           "Hire Date: %s.\n"
           "Salary: $%d.\n",
           employee.name, employee.hireDate, employee.salary);

    return 0;
}