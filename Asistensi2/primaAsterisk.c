#include <stdio.h>
#include <math.h>

int main(void) {
	int num = 0;
	scanf("%d", &num);

	for (int i = 2; i <= num; ++i) {
		int isPrime = 1;
		for (int j = 2; j <= sqrt(i); ++j) {
			if (!(i % j)) {
				isPrime = 0;
				break;
			}
		}

		if (isPrime) {
			printf("* ");
		} else {
			printf("%d ", i);
		}
	}

	printf("\n");
	return 0;
}
