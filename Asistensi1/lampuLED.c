#include <stdio.h>

int main(void){
	int biner,
	    angka = 0,
	    basis = 1,
	    sisa;
	printf("Masukkan angka biner 4 bit: ");
	scanf ("%d", &biner);

	if (biner < 0) {
		printf("Angka tidak boleh negatif.\n");
		return 1;
	}

	while (biner > 0) {
		sisa = biner % 10;
		angka = angka + sisa * basis;
		biner /= 10;
		basis *= 2;
	}

	printf("LED 7 segmen: ");

	switch (angka) {
		case 0:
			printf("1 1 1 1 1 1 0\n");
			break;
		case 1:
			printf("0 1 1 0 0 0 0\n");
			break;
		case 2:
			printf("1 1 0 1 1 0 1\n");
			break;
		case 3:
			printf("1 1 1 1 0 0 1\n");
			break;
		case 4:
			printf("0 1 1 0 0 1 1\n");
			break;
		case 5:
			printf("1 0 1 1 0 1 1\n");
			break;
		case 6:
			printf("1 0 1 1 1 1 1\n");
			break;
		case 7:
			printf("1 1 1 0 0 0 0\n");
			break;
		case 8:
			printf("1 1 1 1 1 1 1\n");
			break;
		case 9:
			printf("1 1 1 1 0 1 1\n");
			break;
		default:
			printf("Angka diluar batas angka lampu LED (0-9).\n");
	}
}

