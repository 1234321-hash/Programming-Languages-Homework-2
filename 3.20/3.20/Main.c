#include <stdio.h>

int main() {
    double hoursWorked, hourlyRate, salary;
    const double overtimeMultiplier = 1.5;

    while (1) {
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%lf", &hoursWorked);

        if (hoursWorked == -1) {
            break;
        }

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &hourlyRate);

        if (hoursWorked > 40) {
            salary = (40 * hourlyRate) + ((hoursWorked - 40) * hourlyRate * overtimeMultiplier);
        }
        else {
            salary = hoursWorked * hourlyRate;
        }

        printf("Salary is $%.2f\n", salary);
    }

    return 0;
}
