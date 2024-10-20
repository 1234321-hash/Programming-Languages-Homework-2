#include <stdio.h>

int main() {
    double sales, salary;
    const double baseSalary = 200.0;
    const double commissionRate = 0.09;

    while (1) {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf", &sales);

        if (sales == -1) {
            break;
        }

        salary = baseSalary + (sales * commissionRate);
        printf("Salary is: $%.2f\n", salary);
    }

    return 0;
}
