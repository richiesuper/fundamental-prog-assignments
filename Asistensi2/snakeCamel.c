#include <stdio.h>

int main(void) {
	char s[101];
	scanf("%[^\n]", s);

	int usIndex[100];

	for (int i = 0; i < 100; ++i) {
		usIndex[i] = 0;
	}

	int len = 0;
	int counter = 0;
	for (int i = 0; s[i]; ++i) {
		if (s[i] == '_') {
			usIndex[counter] = i;
			++counter;
		}

		++len;
	}

	for (int i = 0; i < usIndex[0]; ++i) {
		if (s[i] < 91 && s[i] >= 65) {
			s[i] += 32;
		}
	}

	for (int i = 0; i < counter; ++i) {
		for (int j = usIndex[i]; s[j]; ++j) {
			s[j - i] = s[j - i + 1];
		}

		if (s[usIndex[i] - i] >= 97 && s[usIndex[i] - i] < 123) {
			s[usIndex[i] - i] -= 32;
		}

		for (int j = usIndex[i] + 1; s[j]; ++j) {
			if (s[j] < 91 && s[j] >= 65) {
				s[j] += 32;
			}
		}
	}

	s[len - counter] = 0;

	printf("%s\n", s);
}
