#include <stdio.h>
#include "my_calculator.h"

int main() {
	int a, b;
	puts("Enter a, b: ");
	scanf("%d%d", &a, &b);

	int sum = add(a, b);
	showResult(sum);

	return 0;
}
