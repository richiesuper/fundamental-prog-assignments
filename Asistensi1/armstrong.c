/* Program ini akan mengecek apakah suatu bilangan dari range 0 sampai 999 termasuk bilangan Armstrong. */

/* 1. Identifikasi masalah:
 * 	- Menentukan apakah bilangan n termasuk bilangan Armstrong
 *
 * 2. Analisis masalah:
 * 	- Problem constants:
 * 		- n (satuan) == (digit bilangan n pertama)^3
 * 		- n (puluhan) == (digit bilangan n pertama)^3 + (digit bilangan n kedua)^3
 * 		- n (ratusan) == (digit bilangan n pertama)^3 + (digit bilangan n kedua)^3 + (digit bilangan n ketiga)^3
 * 	- Input:
 * 		- Integer dengan range (0, 999)
 * 	- Output:
 * 		- n merupakan bilangan Armstrong
 * 		- n tidak merupakan bilangan Armstrong
 * 	- Formula:
 * 		- Misalkan:
 * 			- a = digit pertama bilangan n
 * 			- b = digit kedua bilangan n
 * 			- c = digit ketiga bilangan n
 * 		- n == n(1)^3 + n(2)^3 + n(3)^3
 * 3. Desain:
 * 	- Dapatkan input pengguna, harus antara 0 sampai 999
 * 	- Cek kalo input tadi merupakan angka Armstrong, kalo iya, print "merupakan bil. Armstrong", kalo tidak, print "Bukan bil Armstrong"
 * 	- return 0;
 * 4. Implementasi:
 */

#include <stdio.h>
#include <tgmath.h>

int main(void) {

	int digitSatu;
	int digitDua;
	int digitTiga;

	int n = 0;

	printf("Masukkan input (harus di antara (0, 999)): ");
	scanf("%d", &n);

	/* jika mau ngecek bilangan dari 0 sampai 999, pakai for loop di luar kode di bawah */

	if (n < 0 || n > 999) {

		printf("udah dibilang harus antara 0 dan 999 kok!\n");
		return 1;

	} else if (n > 99) {

		digitSatu = n / 100;
		digitDua = n % 100 / 10;
		digitTiga = n % 10;

		if (n == (pow(digitSatu, 3) + pow(digitDua, 3) + pow(digitTiga, 3))) {
			printf("%d adalah bilangan armstrong.\n", n);
		} else {
			printf("%d bukan merupakan bilangan armstrong.\n", n);
		}

	} else if (n > 9 && n < 100) {

		digitSatu = n % 100 / 10;
		digitDua = n % 10;

		if (n == (pow(digitSatu, 2) + pow(digitDua, 2))) {
			printf("%d adalah bilangan armstrong.\n", n);
		} else {
			printf("%d bukan merupakan bilangan armstrong.\n", n);
		}

	} else {

		printf("%d adalah bilangan armstrong.\n", n);
	}

	/*
	if (n == (pow(digitSatu, 3) + pow(digitDua, 3) + pow(digitTiga, 3))) {
		printf("%d adalah bilangan Armstrong.\n", n);
	} else {
		printf("%d bukan merupakan bilangan Armstrong.\n", n);
	}
	*/

	/*
	for (int n = 0; n < 1000; ++n) {
		digitSatu = n / 100;
		digitDua = n % 100 / 10;
		digitTiga = n % 10;

		if (n == (pow(digitSatu, 3) + pow(digitDua, 3) + pow(digitTiga, 3))) {
			printf("%d adalah bilangan Armstrong.\n", n);
		} else {
			printf("%d bukan merupakan bilangan Armstrong.\n", n);
		}
	}
	*/

	return 0;
}
