#include <stdio.h>

int main(void) {
	int n = 0;
	scanf("%d", &n);

	int arr[1000];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}

	int temp = 0;
	int edge = n / 2;
	for (int i = 0; i < edge; ++i) {
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}

	for (int i = 0; i < n; ++i) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}
