/* Program ini adalah implementasi top-down approach dalam mencari akar-akar persamaan kuadrat dengan rumus ABC */

/* 1. Permasalahan
 * Mencari akar-akar dari persamaan kuadrat dengan bentuk persamaan ax^2 + bx + c = 0 dengan rumus ABC
 *
 * 2. Analisis
 * a. Konstanta permasalahan:
 * 	- D >= 0; karena jika D < 0, akar-akarnya adalah bilangan kompleks
 * 	- jika D = 0, akar1 dan akar2-nya sama
 * 	- jika D > 0, akar1 dan akar2-nya tidak sama
 * b. Input:
 * 	- int a, b, c;
 * c. Output:
 * 	- int akar1 dan int akar2
 * d. Formula:
 *                   __________
 *           -b +- \/ b^2 - 4ac
 * x1, x2 = --------------------
 *                   2a
 *
 * 3. Desain
 * a. Algorithma dasar:
 * 	- Dapatkan input pengguna untuk dimasukkan ke konstanta a, b, dan c
 * 	- Cari diskriminan
 * 	- Jika diskriminan < 0, beri tau pengguna kalau inputnya menghasilkan bilangan kompleks
 * 	- Jika diskriminan >= 0, lanjutkan eksekusi program
 * 	- Dapatkan akar1 dan akar2 dari hasil perhitungan
 * 	- Tampilkan hasil perhitungan akar-akar kepada pengguna
 * b. Algorithma final:
 * 	- Diskriminan = (b * b) - (4 * a * c)
 * 	- if Diskriminan < 0, printf("Your input evaluates to complex number"); return 1;
 * 	- x1 = (-b + sqrt(Diskriminan)) / (2 * a)
 * 	- x2 = (-b - sqrt(Diskriminan)) / (2 * a)
 * 	- print x1 dan x2 ke stdout / terminal
 * 	- Terminate the program
 *
 * 4. Implementasi (coding)
 */

#include <stdio.h>
#include <tgmath.h>

double akarHasilPlus(double a, double b, double diskriminan);
double akarHasilMinus(double a, double b, double diskriminan);

int main(void) {
	float  a,
	       b,
	       c;

	printf("Selamat datang, pengguna.\nProgram ini berfungsi untuk memberikan nilai akar-akar dari persamaan kuadrat dengan rumus ABC.\nMasukkan konstanta a, b, c (misal: 1 2 1): ");
	scanf("%f %f %f", &a, &b, &c);

	float diskriminan = b * b - (4 * a * c);

	if (diskriminan < 0) {
		printf("Mohon maaf, pengguna, input yang Anda berikan ternyata menghasilkan akar-akar bilangan kompleks. Coba masukkan nilai lain.\n");
		return 1;
	} else {
		float x1 = akarHasilPlus(a, b, diskriminan);
		float x2 = akarHasilMinus(a, b, diskriminan);
		printf("Akar-akar dari persamaan yang yang berkonstanta:\na = %.2f\nb = %.2f\nc = %.2f\n---------------------------------\n\tx1 = %.2f\n\tx2 = %.2f\n", a, b, c, x1, x2);

		return 0;
	}
}

double akarHasilPlus(double a, double b, double diskriminan) {
	return (-b + sqrt(diskriminan)) / (2 * a);
}

double akarHasilMinus(double a, double b, double diskriminan) {
	return (-b - sqrt(diskriminan)) / (2 * a);
}

/* Identitas:
 *
 * Nama : Richie Seputro
 * NRP 	: 5025211213
 *
 */
