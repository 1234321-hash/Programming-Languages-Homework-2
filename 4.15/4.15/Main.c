#include <stdio.h>
#include <math.h>

int main() {
	double principal = 5000,years=15,rate,year;
	for (rate = 10;rate <= 12;rate+=0.5) {
		printf("�Q�v�G%.1f%%\n", rate);
		printf("�~��\t���B\n");
		for (year = 1;year <= years;year++) {
			double amount = principal * pow(1 + rate / 100, year);
			printf("%lf\t%.2f\n", year, amount);
		}
		printf("\n");
	}
	return 0;
}