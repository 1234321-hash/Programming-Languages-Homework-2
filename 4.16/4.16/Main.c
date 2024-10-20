#include <stdio.h>

int main() {
	int a=10, i, j,k;
	printf("(A)\n");
	for (i = 0;i < a;i++) {
		for (j = 0;j <= i;j++)
			printf("*");
		printf("\n");
	}
	printf("(B)\n");
	for (i = 10;i > 0 ;i--) {
		for (j = 0;j < i;j++)
			printf("*");
		printf("\n");
	}
	printf("(C)\n");
	for (i = 0;i <a;i++) {
		for (j = 0;j < i;j++)
			printf(" ");
		for (k = a;k > i;k--)
			printf("*");
		printf("\n");
	}

	printf("(D)\n");
	for (i = 0;i <= a;i++) {
		for (j = a;j > i;j--)
			printf(" ");
		for (k = 0;k < i;k++)
			printf("*");
		printf("\n");
	}
}