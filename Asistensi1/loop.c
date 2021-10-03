#include <stdio.h>
#include <stdint.h>

int main(void) {
	for (size_t i = 0; i < SIZE_MAX; ++i)
		printf("%zu\n", i);
}
