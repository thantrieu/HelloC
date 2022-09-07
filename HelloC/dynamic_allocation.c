#include <stdio.h>
#include <stdlib.h>

void fillArrElements(int* const a, const size_t n) {
	for (size_t i = 0; i < n; i++)
	{
		printf("a[%u] = ", i);
		scanf("%d", &a[i]);
	}
}

void showArrElements(const int* const a, const size_t n) {
	for (size_t i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
}

int main() {
	int* arr;
	size_t n;
	printf("Nhap so phan tu mang: ");
	scanf("%u", &n);
	// cap phat dong
	arr = (int*)malloc(n * sizeof(int));
	fillArrElements(arr, n);
	puts("Cac phan tu cua mang cap phat dong: ");
	showArrElements(arr, n);

	// thu hoi bo nho
	free(arr);


	// mang hai chieu:
	int** dArr;
	size_t row, col;
	puts("Nhap so hang, so cot: ");
	scanf("%u%u", &row, &col);

	// b1:
	dArr = (int**)malloc(row * sizeof(int*));
	// b2:
	for (size_t i = 0; i < row; i++)
	{
		dArr[i] = (int*)malloc(col * sizeof(int));
	}

	dArr[0][0] = 100;
	// su dung mang hai chieu

	// thu hoi bo nho
	for (size_t i = 0; i < row; i++)
	{
		free(dArr[i]);
	}
	free(dArr);

	return 0;
}