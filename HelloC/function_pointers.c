#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int, int);

int main() {
	int (*doSomething)(int, int);
	int (*actions[3])(int, int) = { add, sub, mul };

	int i;
	for (i = 0; i < 3; i++) {
		printf("KQ con tro ham thu %d = %d\n", i, actions[i](10, 20));
	}

	return 0;
}

int add(int a, int b) {
	printf("Add -- ");
	return a + b;
}

int sub(int a, int b) {
	printf("Sub -- ");
	return a - b;
}

int mul(int a, int b) {
	printf("Mul -- ");
	return a * b;
}