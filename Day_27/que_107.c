// Q107	Write a program to Create salary management system.

#include <stdio.h>

struct Employee
{
    int emp_id;
    char name[50];
    float basic_salary;
    float hra;
    float da;
    float pf;
    float gross_salary;
    float net_salary;
};

int main()
{
    struct Employee e[100];
    int n, i;

    printf("******** SALARY MANAGEMENT SYSTEM ********\n\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    //  Employee Details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &e[i].emp_id);

        printf("Employee Name: ");
        scanf(" %[^\n]", e[i].name); //input name with spaces

        printf("Basic Salary: ");
        scanf("%f", &e[i].basic_salary);

        printf("HRA: ");
        scanf("%f", &e[i].hra);

        printf("DA: ");
        scanf("%f", &e[i].da);

        printf("PF: ");
        scanf("%f", &e[i].pf);

        //calculation of gross and net salary
        e[i].gross_salary = e[i].basic_salary + e[i].hra + e[i].da;
        e[i].net_salary = e[i].gross_salary - e[i].pf;
    }

    // Printing Salary Details
    printf("\n\n******** EMPLOYEE SALARY DETAILS ********\n");

    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID   : %d\n", e[i].emp_id);
        printf("Name          : %s\n", e[i].name);
        printf("Basic Salary  : %.2f\n", e[i].basic_salary);
        printf("HRA           : %.2f\n", e[i].hra);
        printf("DA            : %.2f\n", e[i].da);
        printf("PF            : %.2f\n", e[i].pf);
        printf("Gross Salary  : %.2f\n", e[i].gross_salary);
        printf("Net Salary    : %.2f\n", e[i].net_salary);
    }

    return 0;
}

// Sample Output:

// ******** SALARY MANAGEMENT SYSTEM ********

// Enter number of employees: 1

// Enter Details of Employee 1
// Employee ID: 101
// Employee Name: Rahul Sharma
// Basic Salary: 30000
// HRA: 5000
// DA: 3000
// PF: 2000

// ******** EMPLOYEE SALARY DETAILS ********

// Employee 1
// Employee ID   : 101
// Name          : Rahul Sharma
// Basic Salary  : 30000.00
// HRA           : 5000.00
// DA            : 3000.00
// PF            : 2000.00
// Gross Salary  : 38000.00
// Net Salary    : 36000.00