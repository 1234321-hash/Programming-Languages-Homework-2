#include <stdio.h>

int main() {
    int accountNumber;
    double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    while (1) {
        printf("Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);

        if (accountNumber == -1) {
            break;
        }

        printf("Enter beginning balance: ");
        scanf("%lf", &beginningBalance);
        printf("Enter total charges: ");
        scanf("%lf", &totalCharges);
        printf("Enter total credits: ");
        scanf("%lf", &totalCredits);
        printf("Enter credit limit: ");
        scanf("%lf", &creditLimit);

        newBalance = beginningBalance + totalCharges - totalCredits;

        printf("Account: %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance: %.2f\n", newBalance);

        if (newBalance > creditLimit) {
            printf("Credit Limit Exceeded.\n");
        }
    }

    return 0;
}
