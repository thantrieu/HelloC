#include <stdio.h>

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int main() {
	int a = 100;
	float f = 3.1415f;
	int* aPtr = &a;
	float* fPtr = &f;

	printf("Dia chi bien a: %p\n", &a);
	printf("Gia tri cua &*aPtr: %p\n", &*aPtr);
	printf("Gia tri cua *&aPtr: %p\n", *&aPtr);

	// su dung:
	//*aPtr = 500;

	//printf("gia tri tai dia chi ma aPtr tro toi : %d\n", *aPtr);

	//int b = -200;
	//aPtr = &b; // cho aPtr tro den dia chi cua bien b
	//printf("gia tri tai dia chi ma aPtr tro toi : %d\n", *aPtr);

	//swap(&a, aPtr);

	//printf("Gia tri sau khi trao doi: %d - %d\n", a, b);

	return 0;
}