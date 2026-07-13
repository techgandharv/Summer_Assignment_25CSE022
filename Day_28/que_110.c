// Q110	Write a program to Create bank account system.

#include <stdio.h>

struct bank
{
    char name[50];
    long long acc_no;
    float balance;
};

int main()
{
    struct bank b;
    int choice;
    float amount;

    printf("******** BANK ACCOUNT SYSTEM ********\n\n");

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Account Number: ");
    scanf("%lld", &b.acc_no);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    while (1)
    {
        printf("\n====== MENU ======\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                b.balance += amount;
                printf("Amount Deposited Successfully!\n");
            }
            else
            {
                printf("Invalid Amount!\n");
            }
            break;

        case 2:
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= b.balance)
            {
                b.balance -= amount;
                printf("Withdrawal Successful!\n");
            }
            else
            {
                printf("Insufficient Balance or Invalid Amount!\n");
            }
            break;

        case 3:
            printf("Current Balance: %.2f\n", b.balance);
            break;

        case 4:
            printf("\n----- ACCOUNT DETAILS -----\n");
            printf("Account Holder : %s\n", b.name);
            printf("Account Number : %lld\n", b.acc_no);
            printf("Balance        : %.2f\n", b.balance);
            break;

        case 5:
            printf("Thank You for Using Bank Account System!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}

// Sample Output:

// ******** BANK ACCOUNT SYSTEM ********

// Enter Account Holder Name: Aman Verma
// Enter Account Number: 12345678901
// Enter Initial Balance: 10000

// ====== MENU ======
// 1. Deposit
// 2. Withdraw
// 3. Check Balance
// 4. Account Details
// 5. Exit
// Enter your choice: 1
// Enter Deposit Amount: 2500
// Amount Deposited Successfully!

// ====== MENU ======
// 1. Deposit
// 2. Withdraw
// 3. Check Balance
// 4. Account Details
// 5. Exit
// Enter your choice: 4

// ----- ACCOUNT DETAILS -----
// Account Holder : Aman Verma
// Account Number : 12345678901
// Balance        : 12500.00

// ====== MENU ======
// 1. Deposit
// 2. Withdraw
// 3. Check Balance
// 4. Account Details
// 5. Exit
// Enter your choice: 5
// Thank You for Using Bank Account System!