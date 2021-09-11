/* Program ini akan menghitung suhu dari freezer setelah mengalami mati listrik */

#include <stdio.h>

int main(void) {
	printf("    4(t)^2\nT = ------ - 20\n     t + 2\n");

	double hours = 0;
	printf("Masukkan waktu semenjak freezer mati listrik (dalam satuan jam): ");
	scanf("%lf", &hours);

	double temp = ((4 * hours * hours) / hours -2) - 20;
	printf("Suhu freezer setelah mati listrik selama %.3lf jam adalah %.3lf%cC\n", hours, temp, (char) 248);

	return 0;
}
