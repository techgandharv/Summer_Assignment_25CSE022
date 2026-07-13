// Q112	Write a program to Create contact management system.

#include <stdio.h>

struct contact
{
    char name[50];
    long long mobile;
    char email[50];
};

int main()
{
    struct contact c[100];
    int n, i;

    printf("******** CONTACT MANAGEMENT SYSTEM ********\n\n");

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    // Entering Contact Details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Contact %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", c[i].name);

        printf("Mobile Number: ");
        scanf("%lld", &c[i].mobile);

        printf("Email: ");
        scanf("%s", c[i].email);
    }

    // Showing Contact Details
    printf("\n========== CONTACT LIST ==========\n");

    for (i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name          : %s\n", c[i].name);
        printf("Mobile Number : %lld\n", c[i].mobile);
        printf("Email         : %s\n", c[i].email);
    }

    return 0;
}

// Sample Output:

// ******** CONTACT MANAGEMENT SYSTEM ********

// Enter number of contacts: 2

// Enter details for Contact 1
// Name: Rahul Sharma
// Mobile Number: 9876543210
// Email: rahul@gmail.com

// Enter details for Contact 2
// Name: Priya Singh
// Mobile Number: 9123456789
// Email: priya@gmail.com

// ========== CONTACT LIST ==========

// Contact 1
// Name          : Rahul Sharma
// Mobile Number : 9876543210
// Email         : rahul@gmail.com

// Contact 2
// Name          : Priya Singh
// Mobile Number : 9123456789
// Email         : priya@gmail.com