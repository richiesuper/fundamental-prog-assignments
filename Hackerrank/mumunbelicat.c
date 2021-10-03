#include <stdio.h>

int main(void) {
	float sisiPersegi1 = 0;
	float sisiPersegi2 = 0;

	scanf("%f %f", &sisiPersegi1, &sisiPersegi2);

	float sisa = 0;
	float luasSegitiga = 0;

	if (sisiPersegi1 > sisiPersegi2) {
		sisa = sisiPersegi1 - sisiPersegi2;
		luasSegitiga = sisa * sisiPersegi2 / 2;
	} else if (sisiPersegi1 < sisiPersegi2) {
		sisa = sisiPersegi2 - sisiPersegi1;
		luasSegitiga = sisa * sisiPersegi1 / 2;
	}

	float setengahLapangan = luasSegitiga / 2;
	float seperdelapanLapangan = luasSegitiga / 8;
	float sisaLapangan = luasSegitiga - setengahLapangan - seperdelapanLapangan;

	float harga1 = setengahLapangan * 500;
	float harga2 = seperdelapanLapangan * 350;
	float harga3 = sisaLapangan * 210;

	float totalHarga = harga1 + harga2 + harga3;

	if (!totalHarga) {
		printf("ngecatnya nanti aja, Mun\n");
		return 0;
	}

	printf("%.0f\n", totalHarga);
	return 0;
}
