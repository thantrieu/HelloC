#include <stdio.h>

int main() {
	//int a, b;
	//printf("Nhap hai so nguyen a, b: ");
	//scanf("%d%d", &a, &b);

	//// if: a > b?
	//if (a > b) {
	//	puts("a > b");
	//}
	//else if (a == b) {
	//	puts("a = b");
	//}
	//else {
	//	puts("a < b");
	//}

	int a;
	puts("Nhap so nguyen a: ");
	scanf("%d", &a);
	if (a % 2 == 0) {
		puts("a la so chan");
	}
	else {
		puts("a la so le");
	}
}