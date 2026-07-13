// Q106	Write a program to Create employee management system.

#include <stdio.h>

struct employee
{
    char name[50];
    int emp_id;
    int age;
    float salary;
    long long mob_no;
};

int main()
{
    struct employee s[100];
    int n, i;

    printf("!!!!!! EMPLOYEE MANAGEMENT SYSTEM !!!!!!\n\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Enter Details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("1.Enter Name: ");
        scanf("%[^\n]", &s[i].name);

        printf("2.Enter Employee ID: ");
        scanf("%d", &s[i].emp_id);

        printf("3.Enter Age: ");
        scanf("%d", &s[i].age);

        printf("4.Enter Salary: ");
        scanf("%f", &s[i].salary);

        printf("5.Enter Mobile Number: ");
        scanf("%lld", &s[i].mob_no);
    }

    // Printing Details
    printf("\nThe Employee details are:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("1.Name         : %s\n", s[i].name);
        printf("2.Employee ID  : %d\n", s[i].emp_id);
        printf("3.Age          : %d\n", s[i].age);
        printf("4.Salary       : %.2f\n", s[i].salary);
        printf("5.Mobile Number: %lld\n", s[i].mob_no);
    }

    return 0;
}

// // Sample Output:

// !!!!!! EMPLOYEE MANAGEMENT SYSTEM !!!!!!

// Enter number of employees: 1

// Enter details of employee 1:
// 1.Enter Name: Suresh
// 2.Enter Employee ID: 101
// 3.Enter Age: 45
// 4.Enter Salary: 60000
// 5.Enter Mobile Number: 9836762327

// The Employee details are:

// Employee 1:
// 1.Name         : Suresh
// 2.Employee ID  : 101
// 3.Age          : 45
// 4.Salary       : 60000.00
// 5.Mobile Number: 9836762327
