#include <stdio.h>

int main(void) {
	char s[101];
	scanf("%[^\n]", s);

	int counterA = 0;
	int counterI = 0;
	int counterU = 0;
	int counterE = 0;
	int counterO = 0;

	for (int i = 0; s[i]; ++i) {
		if (s[i] == 'A' || s[i] == 'a') {
			++counterA;
		} else if (s[i] == 'I' || s[i] == 'i') {
			++counterI;
		} else if (s[i] == 'U' || s[i] == 'u') {
			++counterU;
		} else if (s[i] == 'E' || s[i] == 'e') {
			++counterE;
		} else if (s[i] == 'O' || s[i] == 'o') {
			++counterO;
		}
	}

	printf("A/a: %d\nI/i: %d\nU/u: %d\nE/e: %d\nO/o: %d\n", counterA, counterI, counterU, counterE, counterO);

	return 0;
}
