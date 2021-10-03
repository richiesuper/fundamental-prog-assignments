#include <stdio.h>

int main(void) {
	int biskuitPeby = 0;
	int ortu = 0;
	int biskuitMaks = 0;
	int min = 0;
	int max = 0;

	scanf("%d %d %d", &biskuitPeby, &ortu, &biskuitMaks);

	if (!biskuitPeby || !ortu) {
		printf("0 0\n");
	} else if (biskuitPeby > (ortu * biskuitMaks)) {
		printf("-1 -1\n");
	} else if (biskuitPeby == (ortu * biskuitMaks)) {
		printf("%d %d\n", ortu, ortu);
	} else {
		// cari nilai min
		// misal p = 15, q = 6, k = 3
		// maka min = 15 - (2 * 6)
		// aslinya bisa pake 15 % 12 seh wkwkw
		if ((biskuitPeby / ortu) == (biskuitMaks - 1)) {
			min = biskuitPeby - ((biskuitMaks - 1) * ortu);
		}

		// cari nilai max
		// misal p = 15, q = 6, k = 3
		// maka max = (p - q) / (k - 1)
		if (!(biskuitPeby < ortu)) {
			max = (biskuitPeby - ortu) / (biskuitMaks - 1);
		}

		printf("%d %d\n", min, max);
	}
	return 0;
}
