/* Program ini akan menampilkan kalimat terbilang dari suatu angka */

/* 1. Identifikasi masalah
 * 	- Menampilkan output berupa kalimat terbilang, seperti untuk 131 berarti seratus tiga puluh satu
 * 2. Analisis masalah
 * 	- Problem constants:
 * 		- Harus ada suffix "ratus" jika bilangan tersebut digitnya menempati tempat ratusan
 * 		- Harus ada suffix "puluh" jika bilangan tersebut digitnya menempati tempat puluhan
 * 	- Input:
 * 		- Angka (0, 999)
 * 	- Output:
 * 		- Enam ratus enam puluh enam
 * 	- Formula:
 * 		- Ga tau
 * 3. Desain
 * 	- Dapatkan input pengguna
 * 	- Print output
 * 4. Implementasi:
 */

#include <stdio.h>

int main(void) {

	int input = 0;
	printf("Masukkan angka antara 0 sampai 999: ");
	scanf("%d", &input);

	if (input < 0 || input > 999) {
		printf("Harus di antara 0 sampai 999!\n");
		return 1;
	}

	int ratus = 0,
	    puluh = 0,
	    satuan = 0;

	if (input > 99 && input < 1000) {

		ratus = input / 100;
		puluh = input % 100 / 10;
		satuan = input % 10;

		switch (ratus) {
			case 1:
				printf("Seratus ");
				break;
			case 2:
				printf("Dua ratus ");
				break;
			case 3:
				printf("Tiga ratus ");
				break;
			case 4:
				printf("Empat ratus ");
				break;
			case 5:
				printf("Lima ratus ");
				break;
			case 6:
				printf("Enam ratus ");
				break;
			case 7:
				printf("Tujuh ratus ");
				break;
			case 8:
				printf("Delapan ratus ");
				break;
			case 9:
				printf("Sembilan ratus ");
				break;
			default:
				break;
		}

		switch (puluh * 10 + satuan) {
			case 10:
				printf("sepuluh\n");
				return 0;
			case 11:
				printf("sebelas\n");
				return 0;
			case 12:
				printf("dua belas\n");
				return 0;
			case 13:
				printf("tiga belas\n");
				return 0;
			case 14:
				printf("empat belas\n");
				return 0;
			case 15:
				printf("lima belas\n");
				return 0;
			case 16:
				printf("enam belas\n");
				return 0;
			case 17:
				printf("tujuh belas\n");
				return 0;
			case 18:
				printf("delapan belas\n");
				return 0;
			case 19:
				printf("sembilan belas\n");
				return 0;
			default:
				break;
		}

		switch (puluh) {
			case 2:
				printf("dua puluh ");
				break;
			case 3:
				printf("tiga puluh ");
				break;
			case 4:
				printf("empat puluh ");
				break;
			case 5:
				printf("lima puluh ");
				break;
			case 6:
				printf("enam puluh ");
				break;
			case 7:
				printf("tujuh puluh ");
				break;
			case 8:
				printf("delapan puluh ");
				break;
			case 9:
				printf("sembilan puluh ");
				break;
			default:
				break;
		}

		switch (satuan) {
			case 0:
				printf("\n");
				return 0;
			case 1:
				printf("satu\n");
				break;
			case 2:
				printf("dua\n");
				break;
			case 3:
				printf("tiga\n");
				break;
			case 4:
				printf("empat\n");
				break;
			case 5:
				printf("lima\n");
				break;
			case 6:
				printf("enam\n");
				break;
			case 7:
				printf("tujuh\n");
				break;
			case 8:
				printf("delapan\n");
				break;
			case 9:
				printf("sembilan\n");
				break;
			default:
				break;
		}

	} else if (input > 9 && input < 100) {

		puluh = input / 10;
		satuan = input % 10;

		switch (puluh * 10 + satuan) {
			case 10:
				printf("Sepuluh\n");
				return 0;
			case 11:
				printf("Sebelas\n");
				return 0;
			case 12:
				printf("Dua belas\n");
				return 0;
			case 13:
				printf("Tiga belas\n");
				return 0;
			case 14:
				printf("Empat belas\n");
				return 0;
			case 15:
				printf("Lima belas\n");
				return 0;
			case 16:
				printf("Enam belas\n");
				return 0;
			case 17:
				printf("Tujuh belas\n");
				return 0;
			case 18:
				printf("Delapan belas\n");
				return 0;
			case 19:
				printf("Sembilan belas\n");
				return 0;
			default:
				break;
		}

		switch (puluh) {
			case 2:
				printf("Dua puluh ");
				break;
			case 3:
				printf("Tiga puluh ");
				break;
			case 4:
				printf("Empat puluh ");
				break;
			case 5:
				printf("Lima puluh ");
				break;
			case 6:
				printf("Enam puluh ");
				break;
			case 7:
				printf("Tujuh puluh ");
				break;
			case 8:
				printf("Delapan puluh ");
				break;
			case 9:
				printf("Sembilan puluh ");
				break;
			default:
				break;
		}

		switch (satuan) {
			case 0:
				printf("\n");
				return 0;
			case 1:
				printf("satu\n");
				break;
			case 2:
				printf("dua\n");
				break;
			case 3:
				printf("tiga\n");
				break;
			case 4:
				printf("empat\n");
				break;
			case 5:
				printf("lima\n");
				break;
			case 6:
				printf("enam\n");
				break;
			case 7:
				printf("tujuh\n");
				break;
			case 8:
				printf("delapan\n");
				break;
			case 9:
				printf("sembilan\n");
				break;
			default:
				break;
		}

	} else {

		satuan = input;

		switch (satuan) {
			case 0:
				printf("Nol\n");
				break;
			case 1:
				printf("Satu\n");
				break;
			case 2:
				printf("Dua\n");
				break;
			case 3:
				printf("Tiga\n");
				break;
			case 4:
				printf("Empat\n");
				break;
			case 5:
				printf("Lima\n");
				break;
			case 6:
				printf("Enam\n");
				break;
			case 7:
				printf("Tujuh\n");
				break;
			case 8:
				printf("Delapan\n");
				break;
			case 9:
				printf("Sembilan\n");
				break;
			default:
				break;
		}
	}

	return 0;
}

