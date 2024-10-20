#include <stdio.h>
#include <math.h>

int main() {
	double principal = 5000,years=15,rate,year;
	for (rate = 10;rate <= 12;rate+=0.5) {
		printf("利率：%.1f%%\n", rate);
		printf("年分\t金額\n");
		for (year = 1;year <= years;year++) {
			double amount = principal * pow(1 + rate / 100, year);
			printf("%lf\t%.2f\n", year, amount);
		}
		printf("\n");
	}
	return 0;
}