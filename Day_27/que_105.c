// Q105	Write a program to Create student record management system.

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[80];
    int n, i;

    printf("******** STUDENT RECORD MANAGEMENT SYSTEM ********\n\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Enter Student Records
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("1.Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("2.Name: ");
        scanf(" %[^\n]", s[i].name); //takes names having spaces

        printf("3.Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Showing Students Records
    printf("\n\n******** STUDENT RECORDS ********\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("1.Roll Number: %d\n", s[i].roll);
        printf("2.Name       : %s\n", s[i].name);
        printf("3.Marks      : %.2f\n", s[i].marks);
    }

    return 0;
}

// Sample Output:

// ******** STUDENT RECORD MANAGEMENT SYSTEM ********

// Enter number of students: 2    

// Enter details of Student 1:
// 1.Roll Number: 1
// 2.Name: Sachin Gupta
// 3.Marks: 67

// Enter details of Student 2:
// 1.Roll Number: 2
// 2.Name: Vinit Agrawal
// 3.Marks: 89


// ******** STUDENT RECORDS ********

// Student 1:
// 1.Roll Number: 1
// 2.Name       : Sachin Gupta
// 3.Marks      : 67.00

// Student 2:
// 1.Roll Number: 2
// 2.Name       : Vinit Agrawal
// 3.Marks      : 89.00