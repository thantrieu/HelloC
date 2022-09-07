#include <stdio.h>

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void showInfo(int a, int b) {
	printf("a = %d, b = %d\n", a, b);
}

void getArrElements(int a[], size_t* n) {
	puts("Nhap so phan tu cua mang < 10: ");
	scanf("%u", n);
	for (size_t i = 0; i < *n; i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
}

void showArrElements(int a[], size_t n) {
	size_t i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main() {
	int a = 100;
	int b = 5;
	int arr[10];
	size_t n; // so phan tu thuc te cua mang

	getArrElements(arr, &n);
	puts("Cac phan tu cua mang la: ");
	showArrElements(arr, n);

	/*puts("Truoc khi thay doi: ");
	showInfo(a, b);

	puts("Sau khi thay doi: ");
	swap(&a, &b);
	showInfo(a, b);*/

	return 0;
}