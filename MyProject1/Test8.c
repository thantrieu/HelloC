#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	char op;
	scanf("%d %c %d", &a, &op, &b);
	puts("KQ:");
	if (op == '+') {
		printf("%d %c %d = %d", a, op, b, a + b);
	}
}
// 5 + 6 = 11