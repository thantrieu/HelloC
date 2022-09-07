#include <stdio.h>
// n! = n * (n - 1)!

unsigned long long factorial(unsigned int n);
unsigned long long factorialLoop(unsigned int n);

int main() {
	unsigned int n = 22;
	unsigned int i;
	unsigned long long x = 1;
	for (i = 0; i <= n; i++) {
		printf("%u! = %llu\n", i, factorialLoop(i));
	}
	return 0;
}

unsigned long long factorialLoop(unsigned int n) {
	unsigned int i;
	unsigned long long x = 1;
	for (i = 0; i <= n; i++) {
		if (i < 2) {
			x = 1;
		}
		else {
			x *= i;
		}
	}
	return x;
}

unsigned long long factorial(unsigned int n) {
	if (n < 2) {
		return 1; // base
	}
	else { // loi goi de quy
		return n * factorial(n - 1);
	}
}