#include <stdio.h>
/*
	f0 = 0
	f1 = 1
	fn = fn-1 + fn-2, moi  n >= 2
*/

unsigned long long fibonacci(unsigned int n);
unsigned long long fibonacciLoop(unsigned int n);

int main() {
	unsigned int n = 93;
	unsigned int i;
	for (i = 0; i <= n; i++) {
		printf("F%u = %llu\n", i, fibonacci(i));
	}
	return 0;
}

unsigned long long fibonacciLoop(unsigned int n) {
	if (n < 2) {
		return n;
	}
	else {
		unsigned long long f0 = 0;
		unsigned long long f1 = 1;
		unsigned long long fn = 1;

		int i;
		for (i = 2; i <= n; i++) {
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
		}
		return fn;
	}
}

unsigned long long fibonacci(unsigned int n) {
	if (n < 2) { // base
		return n;
	}
	else { // loi goi de quy
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}