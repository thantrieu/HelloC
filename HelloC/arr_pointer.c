#include <stdio.h>

void getArrElements(int *a, size_t* n) {
	puts("Nhap so phan tu cua mang < 10: ");
	scanf("%u", n);
	for (size_t i = 0; i < *n; i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
}

void showArrElements(int *a, size_t n) {
	size_t i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	size_t n = 0;

	// arr += 2; // error
	void* vPtr; // = &n;
	//*(size_t*)vPtr = 5;

	long long* llPtr;
	char* cPtr;

	printf("sizeof(arr) = %u\n", sizeof(arr));
	printf("sizeof(void) = %u\n", sizeof(void));
	printf("sizeof(llPtr) = %u\n", sizeof(llPtr));
	printf("sizeof(cPtr) = %u\n", sizeof(cPtr));

	//int* aPtr = arr; // gan ten mang cho con tro
	// hien thi cac phan tu trong mang:
	//puts("Cac phan tu trong mang: ");
	//showArrElements(aPtr, n);

	return 0;
}
