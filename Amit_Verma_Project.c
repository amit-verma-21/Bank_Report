// Project By Amit Verma
// Bank Record System of an Individual

#include <stdio.h>

float deposit(float balance) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Deposited successfully!\n");
    } else {
        printf("Invalid deposit amount!\n");
    }
    return balance;
}

float withdraw(float balance) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount > balance) {
        printf("Insufficient balance! Cannot withdraw.\n");
    } else if (amount <= 0) {
        printf("Invalid withdrawal amount!\n");
    } else {
        balance -= amount;
        printf("Withdrawal successful!\n");
    }
    return balance;
}

int main() {
    float balance;
    int choice;

    printf("Enter starting balance: ");
    scanf("%f", &balance);

    // Loop max 10 times
    for (int i = 1; i <= 10; i++) {
        printf("\n--- Operation %d of 10 ---\n", i);
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            balance = deposit(balance);
        }
        else if (choice == 2) {
            balance = withdraw(balance);
        }
        else if (choice == 3) {
            printf("Exiting...\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
            i--;  // Don't count this as an operation
        }

        printf("Current Balance: %.2f\n", balance);
    }

    printf("\nFinal Balance: %.2f\n", balance);

    return 0;
}
