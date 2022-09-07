#include <stdio.h>

void staticArr();

int main() {
	/*
	staticArr();

	puts("------------------");

	staticArr();
	*/
	int numbers[100] = {0, 1, 5, 7, 9};
	float grades[5] = {8.75f, 4.5f};
	
	grades[2] = 9;
	grades[4] = 9.25f;
	numbers[99] = 50;

	puts("Cac phan tu trong mang number: ");
	int i;
	for (i = 0; i < 100; i++) {
		numbers[i] += i * 2;
	}

	for (i = 0; i < 100; i++) {
		printf("number[%d] = %d\n", i, numbers[i]);
	}

	return 0;
}

void staticArr() {
	int i;
	static int numbers[10];
	for (i = 0; i < 10; i++) {
		printf("number[%d] = %d\n", i, numbers[i]);
	}
	// update
	for (i = 0; i < 10; i++) {
		numbers[i] += i * 2;
	}
	// sau khi cap nhat:
	puts("sau khi cap nhat: ");
	for (i = 0; i < 10; i++) {
		printf("number[%d] = %d\n", i, numbers[i]);
	}
}