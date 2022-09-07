#include <stdio.h>

long add(long a, long b) {
	long sum = a + b;
	return sum;
}

void div(int a, int b) {
	float f = (float)a / b;
	printf("a / b = %f\n", f);
}

int main() {
	long a = 10;
	short b = 20;
	const int X = 120;

	long sum = add(X, 1123);

	printf("SUM = %ld\n", sum);

	div(10, 3);

	return 0;
}