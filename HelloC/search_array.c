#include <stdio.h>

void showArrElements(const int a[], const size_t n);
int linearSearch(const int a[], const size_t n, const int key);
int binarySearch(const int a[], const size_t n, const int key, int low, int height);
void sortASC(int a[], const size_t n);

int main() {
	int a[12] = { 1, 3, 9, 5, 4, 7, 8, 6, 2, 0, 1, 8 };
	size_t n = 12;

	puts("Mang ban dau: ");
	showArrElements(a, n);

	/*sortASC(a, n);
	puts("Mang sau khi sap xep: ");
	showArrElements(a, n);*/

	int x;
	puts("Nhap x can tim: ");
	scanf("%d", &x);

	
	int index = linearSearch(a, n, x);
	if (index != -1) {
		printf("Tim thay gia tri x tai vi tri dau tien: %d", index);
	}
	else {
		puts("Khong tim thay x trong mang!");
	}
	return 0;
}

int binarySearch(const int a[], const size_t n, const int key, int low, int height) {
	int middle;
	while (low <= height) {
		middle = (low + height) / 2;
		if (key == a[middle] ) {
			return middle;
		}
		else if(key < a[middle]) { // tim kiem ben trai phan tu middle
			height = middle - 1;
		}
		else { // tim kiem ben phai phan tu middle
			low = middle + 1;
		}
	}
	return -1;
}

void sortASC(int a[], const size_t n) {
	void swap(int* a, int* b);
	size_t i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {
				swap(&a[j], &a[j - 1]);
			}
		}
	}
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int linearSearch(const int a[], const size_t n, const int key) {
	size_t i;
	for (i = 0; i < n; i++) {
		if (key == a[i]) {
			return i; // da tim thay 
		}
	}
	return -1; // khong co ket qua
}

void showArrElements(const int a[], const size_t n) {
	size_t i;
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}