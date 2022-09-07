#include <stdio.h>

void doSomething();
int add(int, int);
void show(int);

int main() {
	int sum = add(10, 50);
	printf("sum = %d\n", sum);
	doSomething();
	return 0;
}

void doSomething() {
	int r = add(10, 20);
	show(r);
}

int add(int a, int b) {
	return a + b;
}

void show(int result) {
	printf("result = %d\n", result);
}