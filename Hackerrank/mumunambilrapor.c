#include <stdio.h>

int main(void) {
	float nilaiRataRata = 0;
	float a = 0, b = 0, c = 0, d = 0;

	scanf("%f %f %f %f %f", &nilaiRataRata, &a, &b, &c, &d);
	nilaiRataRata = (nilaiRataRata * 32 + a + b + c + d) / 36

	if (a >= 75) {
		printf("Wah kamu lulus!!\n");
	} else {
		if (a >= nilaiRataRata) {
			printf("Loh kamu harus remidi :3\n");
		} else {
			printf("Yah kamu harus ngulang :\\\n");
		}
	}

	if (b >= 75) {
		printf("Wah kamu lulus!!\n");
	} else {
		if (b >= nilaiRataRata) {
			printf("Loh kamu harus remidi :3\n");
		} else {
			printf("Yah kamu harus ngulang :\\\n");
		}
	}

	if (c >= 75) {
		printf("Wah kamu lulus!!\n");
	} else {
		if (c >= nilaiRataRata) {
			printf("Loh kamu harus remidi :3\n");
		} else {
			printf("Yah kamu harus ngulang :\\\n");
		}
	}

	if (d >= 75) {
		printf("Wah kamu lulus!!\n");
	} else {
		if (d >= nilaiRataRata) {
			printf("Loh kamu harus remidi :3\n");
		} else {
			printf("Yah kamu harus ngulang :\\\n");
		}
	}
}
