#include <stdio.h>
#include <ctype.h>

void toUpperCase(char* a);
void showCharArray(const char* a);
void showIntArray(const int* const a, const size_t n);

int main() {
	char name[] = { 't', 'r', 'u', 'n', 'g', '\0' };
	int arr[5] = { 1, 2, 3, 4, 5 };
	size_t n = 5;

	name[0] = 'p';

	/*int a = 100;
	int* const aPtr = &a;
	*aPtr = 200;

	int b = 10;
	aPtr = &b;*/

	toUpperCase(name);
	showCharArray(name);

	return 0;
}

void toUpperCase(char* a) {
	while (*a != '\0') {
		*a = toupper(*a);
		a++;
	}
}

void showCharArray(const char* a) {
	puts("Du lieu trong chuoi ki tu la: ");
	for (; *a != '\0'; a++) {
		printf("%c", *a);
	}
}

void showIntArray(const int* const a, const size_t n) {
	size_t i;
	for (i = 0; i < n; i++) {
		printf("%5d", a[i]);
	}
}