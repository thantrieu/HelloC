#include <stdio.h>
#include "my_calculator.h"

int add(int a, int b) {
	return a + b;
}

float div(int a, int b) {
	return (float)a / b;
}

int mul(int a, int b) {
	return a * b;
}

void showResult(int result) {
	printf("Result = %d\n", result);
}