// Q108	Write a program to Create marksheet generation system.

#include <stdio.h>

struct student
{
    int roll_no;
    char name[50];
    float phy, chem, math, total, percentage;
};

int main()
{
    struct student s[50];
    int n, i;

    printf("@@@@@@@ MARKSHEET GENERATION SYSTEM @@@@@@@\n\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input details
    printf("Enter details:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        printf("1.Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("2.Name: ");
        scanf(" %[^\n]", &s[i].name);

        printf("3.Physics marks: ");
        scanf("%f", &s[i].phy);

        printf("4.Chemistry marks: ");
        scanf("%f", &s[i].chem);

        printf("5.Maths marks: ");
        scanf("%f", &s[i].math);

        // total
        s[i].total = s[i].phy + s[i].chem + s[i].math;

        // percentage
        s[i].percentage = ((s[i].total) / 300.00) * 100.00;
    }

    // Printing Marksheet

    printf("\nResult:\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("1.Roll No        : %d\n", s[i].roll_no);
        printf("2.Name           : %s\n", s[i].name);
        printf("3.Physics marks  : %.2f\n", s[i].phy);
        printf("4.Chemistry marks: %.2f\n", s[i].chem);
        printf("5.Maths marks    : %.2f\n", s[i].math);
        printf("6.Total Marks    : %.2f\n", s[i].total);
        printf("7.Percentge      : %.2f\n", s[i].percentage);
    }

    return 0;
}

// Sample Output:

// Enter number of students: 1
// Enter details:

// Student 1:
// 1.Roll No: 1
// 2.Name: Sachin
// 3.Physics marks: 67
// 4.Chemistry marks: 89
// 5.Maths marks: 78

// Result:
// Student 1:
// 1.Roll No        : 1
// 2.Name           : Sachin
// 3.Physics marks  : 67.00
// 4.Chemistry marks: 89.00
// 5.Maths marks    : 78.00
// 6.Total Marks    : 234.00
// 7.Percentge      : 78.00