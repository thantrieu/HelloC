#include <stdio.h>
#include <stdlib.h>

void fill2DArrElements(int** arr, const size_t row, const size_t col);
void show2DArrElements(const int** arr, const size_t row, const size_t col);

int main() {
	int** arr;
	size_t row = 3; // so hang
	size_t col = 4; // so cot
	// buoc 1
	arr = (int**)malloc(row * sizeof(int*));
	// buoc 2
	size_t i;
	for (i = 0; i < row; i++) {
		arr[i] = (int*)malloc(col * sizeof(int));
	}
	// su dung mang hai chieu cap phat dong
	fill2DArrElements(arr, row, col);
	show2DArrElements(arr, row, col);

	// giai phong bo nho sau khi su dung
	for (i = 0; i < row; i++) {
		free(arr[i]); // giai phong hang
	}
	free(arr); // giai phong con tro kep

	return 0;
}

void fill2DArrElements(int** arr, const size_t row, const size_t col) {
	size_t i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("arr[%u][%u] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void show2DArrElements(const int** arr, const size_t row, const size_t col) {
	puts("Cac phan tu mang hai chieu la: ");
	size_t i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%5d", arr[i][j]);
		}
		puts("");
	}
}