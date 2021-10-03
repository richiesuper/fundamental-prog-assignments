#include <stdio.h>

int main(void) {
	int operand1 = 0;
	int operand2 = 0;
	char operator;

	scanf("%d %c %d", &operand1, &operator, &operand2);

	double hasil = 0;

	if (!operand2) {
		printf("gk mungkin mbak\n");
		return 0;
	}

	if (operator == '+') {
		hasil = operand1 + operand2;
		printf("%c %.2lf\n", operator, hasil);
	} else if (operator == '-') {
		hasil = operand1 - operand2;
		printf("%c %.2lf\n", operator, hasil);
	} else if (operator == '*') {
		hasil = operand1 * operand2;
		printf("%c %.2lf\n", operator, hasil);
	} else if (operator == '/') {
		hasil = (double) operand1 / (double) operand2;
		printf("%c %.2lf\n", operator, hasil);
	} else if (operator == '%') {
		hasil = operand1 % operand2;
		printf("%c %.2lf\n", operator, hasil);
	} else {
		printf("gk mungkin mbak\n");
	}

	return 0;
}
