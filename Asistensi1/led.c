#include <stdio.h>

int main(void) {
	int biner = 0;

	printf("Masukkan bilangan biner 4 bit: ");
	scanf("%d", &biner);

	if (biner == 0) {
		printf("1 1 1 1 1 1 0\n");
	} else if (biner == 1) {
		printf("0 1 1 0 0 0 0\n");
        } else if (biner == 10) {
		printf("1 1 0 1 1 0 1\n");
        } else if (biner == 11) {
		printf("1 1 1 1 0 0 1\n");
        } else if (biner == 100) {
		printf("0 1 1 0 0 1 1\n");
        } else if (biner == 101) {
		printf("1 0 1 1 0 1 1\n");
        } else if (biner == 110) {
		printf("1 0 1 1 1 1 1\n");
        } else if (biner == 111) {
		printf("1 1 1 0 0 0 0\n");
        } else if (biner == 1000) {
		printf("1 1 1 1 1 1 1\n");
        } else if (biner == 1001) {
		printf("1 1 1 1 0 1 1\n");
	} else {
		printf("Biner anda melebihi range LED.\n");
		return 1;
	}
	return 0;
}

