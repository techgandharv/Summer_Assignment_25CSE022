// Q109	Write a program to Create library management system.

#include <stdio.h>

struct book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct book b[100];
    int n = 0, choice, i, searchId;

    printf("******** LIBRARY MANAGEMENT SYSTEM ********\n");

    while (1)
    {
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", b[n].name);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", b[n].author);

            n++;
            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No books available.\n");
            }
            else
            {
                printf("\n----- Book List -----\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nBook %d\n", i + 1);
                    printf("ID     : %d\n", b[i].id);
                    printf("Name   : %s\n", b[i].name);
                    printf("Author : %s\n", b[i].author);
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++)
            {
                if (b[i].id == searchId)
                {
                    printf("\nBook Found!\n");
                    printf("ID     : %d\n", b[i].id);
                    printf("Name   : %s\n", b[i].name);
                    printf("Author : %s\n", b[i].author);
                    break;
                }
            }

            if (i == n)
            {
                printf("Book not found!\n");
            }
            break;

        case 4:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}

// Sample Output:

// ******** LIBRARY MANAGEMENT SYSTEM ********

// 1. Add Book
// 2. Display Books
// 3. Search Book
// 4. Exit

// Enter your choice: 1

// Enter Book ID: 101
// Enter Book Name: C Programming
// Enter Author Name: Dennis Ritchie
// Book Added Successfully!

// 1. Add Book
// 2. Display Books
// 3. Search Book
// 4. Exit

// Enter your choice: 1

// Enter Book ID: 102
// Enter Book Name: Data Structures
// Enter Author Name: Seymour Lipschutz
// Book Added Successfully!

// 1. Add Book
// 2. Display Books
// 3. Search Book
// 4. Exit

// Enter your choice: 2

// ----- Book List -----

// Book 1
// ID     : 101
// Name   : C Programming
// Author : Dennis Ritchie

// Book 2
// ID     : 102
// Name   : Data Structures
// Author : Seymour Lipschutz

// 1. Add Book
// 2. Display Books
// 3. Search Book
// 4. Exit

// Enter your choice: 3

// Enter Book ID to search: 102

// Book Found!
// ID     : 102
// Name   : Data Structures
// Author : Seymour Lipschutz

// 1. Add Book
// 2. Display Books
// 3. Search Book
// 4. Exit

// Enter your choice: 4

// Thank You!