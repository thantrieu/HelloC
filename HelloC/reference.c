#include <stdio.h>

void swap1(int a, int b);
void swap2(int *a, int *b);

void add(int a, int b, float c, float* sum);

int main() {
	int a = 5;
	int b = 9;
	float c = 3.141592;
	float sum;
	add(a, b, c, &sum);
	printf("sum of three numbers = %f\n", sum);

	/*swap1(a, b);
	puts("--------------------------");
	printf("Trong ham main: \na = %d, b = %d\n", a, b);
	puts("--------------------------");
	swap2(&a, &b);
	puts("--------------------------");
	printf("Trong ham main: \na = %d, b = %d\n", a, b);*/

	return 0;
}

void add(int a, int b, float c, float* sum) {
	*sum = (a + b + c);
}

void swap1(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
	printf("Trong ham truyen gia tri:\na = %d, b = %d\n", a, b);
}

void swap2(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
	printf("Trong ham truyen tham chieu:\na = %d, b = %d\n", *a, *b);
}