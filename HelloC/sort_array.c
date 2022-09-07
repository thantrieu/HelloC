#include <stdio.h>

// sap xep giam dan
// sap xep tang dan
// doi cho hai phan tu
void sortDESC(int a[], const size_t n);
void sortASC(int a[], const size_t n);
void swap(int* a, int* b);
void showArrElements(const int a[], const size_t n);

int main() {
	int a[10] = { 1, 3, 9, 5, 4, 7, 8, 6, 2, 0 };
	size_t n = 10;

	puts("Truoc khi sap xep: ");
	showArrElements(a, n);

	puts("Sau khi sap xep tang: ");
	sortASC(a, n);
	showArrElements(a, n);

	puts("Sau khi sap xep giam: ");
	sortDESC(a, n);
	showArrElements(a, n);

	return 0;
}
// hàm sắp xếp giảm dần
void sortDESC(int a[], const size_t n) {
	size_t i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j] > a[j - 1]) {
				swap(&a[j], &a[j - 1]);
			}
		}
	}
}
// hàm sắp xếp tăng dần
void sortASC(int a[], const size_t n) {
	size_t i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {
				swap(&a[j], &a[j - 1]);
			}
		}
	}
}
// hàm đổi chỗ hai phần tử
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
// hàm hiển thị kết quả
void showArrElements(const int a[], const size_t n) {
	size_t i;
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}