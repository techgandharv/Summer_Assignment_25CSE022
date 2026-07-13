// Q111	Write a program to Create ticket booking system.

#include <stdio.h>

struct ticket
{
    char name[50];
    int age;
    char destination[50];
    int seats;
    float fare;
};

int main()
{
    struct ticket t[100];
    int n, i;

    printf("******** TICKET BOOKING SYSTEM ********\n\n");

    printf("Enter number of bookings: ");
    scanf("%d", &n);

    // Entering Details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Passenger %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", t[i].name);

        printf("Age: ");
        scanf("%d", &t[i].age);

        printf("Destination: ");
        scanf(" %[^\n]", t[i].destination);

        printf("Number of Seats: ");
        scanf("%d", &t[i].seats);

        printf("Fare per Seat: ");
        scanf("%f", &t[i].fare);
    }

    // Showing Details
    printf("\n========== BOOKING DETAILS ==========\n");

    for (i = 0; i < n; i++)
    {
        printf("\nPassenger %d\n", i + 1);
        printf("Name            : %s\n", t[i].name);
        printf("Age             : %d\n", t[i].age);
        printf("Destination     : %s\n", t[i].destination);
        printf("Seats Booked    : %d\n", t[i].seats);
        printf("Total Fare      : %.2f\n", t[i].fare * t[i].seats);
    }

    printf("\nThank You for Booking!\n");

    return 0;
}

// Sample Output:

// ******** TICKET BOOKING SYSTEM ********

// Enter number of bookings: 2

// Enter details for Passenger 1
// Name: Rahul Sharma
// Age: 22
// Destination: Delhi
// Number of Seats: 2
// Fare per Seat: 550

// Enter details for Passenger 2
// Name: Priya Singh
// Age: 19
// Destination: Lucknow
// Number of Seats: 1
// Fare per Seat: 750

// ========== BOOKING DETAILS ==========

// Passenger 1
// Name            : Rahul Sharma
// Age             : 22
// Destination     : Delhi
// Seats Booked    : 2
// Total Fare      : 1100.00

// Passenger 2
// Name            : Priya Singh
// Age             : 19
// Destination     : Lucknow
// Seats Booked    : 1
// Total Fare      : 750.00

// Thank You for Booking!