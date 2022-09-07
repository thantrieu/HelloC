#include <stdio.h>

void input(int arr[], size_t* n);
void showArrElements(const int arr[], const size_t n);
void changeArrLements(int arr[], const size_t n);

int main() {
	int numbers[10];
	size_t n; // so phan tu thuc te
	// nhap cac phan tu cho mang
	input(numbers, &n);
	// hien thi cac phan tu
	puts("Array elements are: ");
	showArrElements(numbers, n);
	// cap nhat mang
	changeArrLements(numbers, n);
	puts("\nArray elements after update: ");
	showArrElements(numbers, n);
	puts("");

	return 0;
}

void input(int arr[], size_t* n) {
	puts("Enter array elements: ");
	scanf("%u", n);
	size_t i;
	for (i = 0; i < *n; i++) {
		printf("arr[%u] = ", i);
		scanf("%d", &arr[i]);
	}
}

void showArrElements(const int arr[], const size_t n) {
	size_t i;
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

void changeArrLements(int arr[], const size_t n) {
	size_t i;
	for (i = 0; i < n; i++) {
		arr[i] *= 2;
	}
}