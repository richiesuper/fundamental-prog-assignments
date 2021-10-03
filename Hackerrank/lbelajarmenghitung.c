#include <stdio.h>

#define ANGKA_APAAN_INI 1000000007

int main(void) {
	size_t input1 = 0;
	size_t input2 = 0;
	scanf("%zu %zu", &input1, &input2);

	input1 %= ANGKA_APAAN_INI;
	input2 %= ANGKA_APAAN_INI;

	printf("%zu\n", input1 + input2);
	return 0;
}
