#include <stdio.h>

int main(void) {
	int s = 0, t = 0, a = 0, b = 0;
	int apel1 = 0, apel2 = 0, apel3 = 0;
	int jeruk1 = 0, jeruk2 = 0, jeruk3 = 0;

	scanf("%d %d %d %d %d %d %d %d %d %d", &s, &t, &a, &b, &apel1, &apel2, &apel3, &jeruk1, &jeruk2, &jeruk3);

	int jatuhA1 = a + apel1;
	int jatuhA2 = a + apel2;
	int jatuhA3 = a + apel3;

	int jatuhJ1 = b + jeruk1;
	int jatuhJ2 = b + jeruk2;
	int jatuhJ3 = b + jeruk3;

	int masukRumahIqi = 0;
	int apelMasuk = 0;
	int jerukMasuk = 0;

	if (jatuhA1 >= s && jatuhA1 <= t) {
		masukRumahIqi++;
		apelMasuk++;
	}
	if (jatuhA2 >= s && jatuhA2 <= t) {
		masukRumahIqi++;
		apelMasuk++;
	}
	if (jatuhA3 >= s && jatuhA3 <= t) {
		masukRumahIqi++;
		apelMasuk++;
	}
	if (jatuhJ1 <= t && jatuhJ1 >= s) {
		masukRumahIqi++;
		jerukMasuk++;
	}
	if (jatuhJ2 <= t && jatuhJ2 >= s) {
		masukRumahIqi++;
		jerukMasuk++;
	}
	if (jatuhJ3 <= t && jatuhJ3 >= s) {
		masukRumahIqi++;
		jerukMasuk++;
	}

	printf("%d %d\n", apelMasuk, jerukMasuk);
	return 0;
}
