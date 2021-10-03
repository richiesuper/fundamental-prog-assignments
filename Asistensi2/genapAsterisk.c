#include <stdio.h>

int main(void) {
	int num = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; ++i) {
		if (i % 2) {
			printf("%d ", i);
		} else {
			printf("* ");
		}
	}

	printf("\n");
	return 0;
}
