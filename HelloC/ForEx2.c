#include <stdio.h>
int main() {
	int n; // khai bao bien n
	puts("Nhap so nguyen duong n: ");
	scanf("%d", &n); // doc vao gia tri cua n
	// thuc hien y a:
	puts("\nCac gia tri thoa man 1 <= i <= n chia het cho 3, 5 la: ");
	for (int i = 1; i <= n; i++)
	{ // neu i chia het cho 3 va 5
		if (i % 3 == 0 && i % 5 == 0) { // su dung &&
			printf("%d ", i); // in ra i
		}
	}
	// thuc hien y b:
	puts("\nCac gia tri 1 <= i <= n chia het cho 4 hoac 5 la: ");
	for (int i = 1; i <= n; i++)
	{ // neu i chia het cho 4 hoac 5
		if (i % 4 == 0 || i % 5 == 0) { // su dung ||
			printf("%d ", i); // in ra i
		}
	}
	// thuc hien y c:
	puts("\nCac gia tri 1 <= i <= n khong chia het cho 3, 5, 7 la: ");
	for (int i = 1; i <= n; i++)
	{ // neu i khong chia het cho 3 va 5 va 7
		if (!(i % 3 == 0) && !(i % 5 == 0) && !(i % 7 == 0)) { // su dung && ket hop !
			printf("%d ", i); // in ra i
		}
	}
	puts("\n");
}