#include <stdio.h>

int main() {
    int paycode;
    double weeklyPay;

    while (1) { 
        printf("輸入薪資代碼 (1: Managers, 2: hourly workers, 3: commission workers , 4: pieceworkers , 0: exit): ");
        scanf("%d", &paycode);

        if (paycode == 0) {
            break;
        }

        switch (paycode) {
        case 1: 
            printf("請輸入每週固定薪水: ");
            scanf("%lf", &weeklyPay);
            break;

        case 2: 
        {
            double hourlyRate;
            int hoursWorked;
            printf("請輸入每小時工資: ");
            scanf("%lf", &hourlyRate);
            printf("請輸入工作小時數: ");
            scanf("%d", &hoursWorked);
            if (hoursWorked > 40) {
                weeklyPay = (40 * hourlyRate) + ((hoursWorked - 40) * hourlyRate * 1.5);
            }
            else {
                weeklyPay = hoursWorked * hourlyRate;
            }
        }
        break;

        case 3: 
        {
            double grossSales;
            printf("請輸入本周總銷售額: ");
            scanf("%lf", &grossSales);
            weeklyPay = 250 + (grossSales * 0.057);
        }
        break;

        case 4:
        {
            double payPerItem;
            int itemsProduced;
            printf("請輸入每件的薪水: ");
            scanf("%lf", &payPerItem);
            printf("請輸入生產的數量: ");
            scanf("%d", &itemsProduced);
            weeklyPay = payPerItem * itemsProduced;
        }
        break;

        default:
            printf("無效的薪資代碼。\n");
            continue; 
        }

        printf("每週薪水: %.2f\n\n", weeklyPay);
    }

    return 0;
}
