// Q103	Write a program to Create ATM simulation.

#include <stdio.h>

int main()
{
    printf("$$$$$$ ATM SIMULATION $$$$$$\n");

    float balance = 10000, amount;
    int function, rating;

    while (1)
    {

        printf("\n\n*******MENU*******\n");
        printf("1.Check Balance.\n");
        printf("2.Deposit.\n");
        printf("3.Withdrawal.\n");
        printf("4.Exit.\n");

        printf("Choose your function:");
        scanf("%d", &function);

        switch (function)
        {
        case 1:
            printf("Current Balance = %.2f\n", balance);
            break;

        case 2:
            printf("Enter Amount:\n");
            scanf("%f", &amount);
            if (amount <= 0)
            {
                printf("Invalid Amount!");
            }
            else
            {
                balance += amount;
                printf("%.2f deposited successfully!\n", amount);
                printf("Updated Balance = %.2f", balance);
            }
            break;

        case 3:
            printf("Enter Amount:\n");
            scanf("%f", &amount);
            if (amount <= 0)
            {
                printf("Invalid Amount!");
            }
            else if (amount > balance)
            {
                printf("Insufficient Balance!");
            }
            else
            {
                balance -= amount;
                printf("%.2f withdrawn successfully!\n", amount);
                printf("Updated Balance = %.2f", balance);
            }
            break;

        case 4:
            printf("Thank You!\n");
            printf("Please rate your experience out of 10: ");
            scanf("%d", &rating);

            if (rating >= 1 && rating <= 10)
            {
                printf("Thanks for your feedback!");
            }
            else
            {
                printf("Invalid rating! Please enter a value between 1 and 10.");
            }
            return 0;

        default:
            printf("Invalid Function!\n");
            printf("Please try again.");
            break;
        }
    }

    return 0;
}

// Sample Output:

// $$$$$$ ATM SIMULATION $$$$$$


// *******MENU*******
// 1.Check Balance.
// 2.Deposit.
// 3.Withdrawal.
// 4.Exit.
// Choose your function:1
// Current Balance = 10000.00


// *******MENU*******
// 1.Check Balance.
// 2.Deposit.
// 3.Withdrawal.
// 4.Exit.
// Choose your function:2
// Enter Amount:
// 3000
// 3000.00 deposited successfully!
// Updated Balance = 13000.00

// *******MENU*******
// 1.Check Balance.
// 2.Deposit.
// 3.Withdrawal.
// 4.Exit.
// Choose your function:3
// Enter Amount:
// 5000
// 5000.00 withdrawn successfully!
// Updated Balance = 8000.00

// *******MENU*******
// 1.Check Balance.
// 2.Deposit.
// 3.Withdrawal.
// 4.Exit.
// Choose your function:4
// Thank You!
// Please rate your experience out of 10: 9
// Thanks for your feedback!